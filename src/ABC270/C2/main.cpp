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
vector<vector<int>> G(100009);
string ans;
int n, x, y;

int main() {
  cin >> n >> x >> y;
  for (int i = 0; i < n-1; i++)
  {
    int u,v;
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  int s_dp[n+1];
  int t = x;
  s_dp[t] = 0;
  while (true)
  {
    for (int i = 0; i < G[t].size(); i++){
      s_dp[G[t][i]] = s_dp[]
    }
  }
  return 0;
}
