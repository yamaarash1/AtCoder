#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <cmath>
#include <limits>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
int n, m;
vector<vector<int>> taka(10);
vector<vector<int>> aoki(10);
vector<bool> visited(10);
bool ok = true;

void dfs(int num)
{
  visited[num] = true;
  if(taka[num].size() != aoki[num].size()){
    ok = false;
    return;
  }
  for (int i = 0; i < taka[num].size(); i++) {
    if (visited[taka[num][i]])
      continue;
    if (taka[num][i] != aoki[num][i]) {
      ok = false;
      return;
    }
    dfs(taka[num][i]);
  }
}
int main()
{
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    taka[a].push_back(b);
    taka[b].push_back(a);
  }
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    aoki[a].push_back(b);
    aoki[b].push_back(a);
  }
  for (int i = 0;i<n;i++){
    sort(aoki[i].begin(), aoki[i].end());
    sort(taka[i].begin(), taka[i].end());
  }
  dfs(1);
  if (ok)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}
