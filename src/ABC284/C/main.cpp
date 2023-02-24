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

int n,m,ans=0;
vector<vector<int>> G(109);
vector<bool> pass(109);

void dfs(int v) {
  if(pass[v]) {
    return;
  }
  pass[v] = true;
  for (auto x : G[v]) {
    dfs(x);
  }
}

int main() { 
  cin >> n >> m;
  for (int i = 0; i < m;i++){
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  for (int i = 1;i <= n;i++){
    if(pass[i]) 
      continue;
    ans++;
    dfs(i);
  }
  cout << ans <<endl;
  return 0;
}
