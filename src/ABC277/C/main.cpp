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
map<int, vector<int>> G;
map<int, bool> pass;
int ans = 1;

void dfs(vector<int> x)
{
  if(x.size() == 0) {
    return;
  }
  for(auto r : x) {
    if(pass[r])
      continue;
    ans = max(ans, r);
    pass[r] = true;
    dfs(G[r]);
  }
  return;
}

int main() {
  int n;
  cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  dfs(G[1]);
  cout << ans << endl;
  return 0;
}
