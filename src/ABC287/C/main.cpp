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
int n,m;
int count = 0;
vector<vector<int>> g(200009);
vector<bool> visited(200009, false);
int one_hand = -1;
void dfs(int v){
  if(g[v].size() > 2) {
    cout << "No" << endl;
    exit(0);
  }
  visited[v] = true;
  int count = 0;
  for (int i = 0; i < g[v].size(); i++)
  {
    if (!visited[g[v][i]])
    {
      dfs(g[v][i]);
    } else {
      count++;
    }
  }
  if (count == g[v].size() && g[v].size() != 1) {
    cout << "No" << endl;
    exit(0);
  }
  return;
}

int main() {
  int u, v;
  cin >> n >> m;
  for (int i = 0; i < m;i++){
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  if(m == 0) {
    cout << "No" << endl;
    return 0;
  }
  if(m == 1) {
    cout << "Yes" << endl;
    return 0;
  }
  for (int i = 1;i <= n; i++) {
    if(g[i].size() == 1) {
      one_hand = i;
      break;
    }
  }
  if(one_hand == -1) {
    cout << "No" << endl;
    return 0;
  }
  dfs(one_hand);
  for (int i = 1; i <= n;i++){
    if(!visited[i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
