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
int n, m;
int A[2009], B[2009];
bool pass[2009];
int res;
int count;
vector<vector<int>> G;

void dfs(int v)
{
  if(pass[v])
    return;
  pass[v] = true;
  for(auto next_v: G[v]) dfs(next_v);
}

int main() {
  int a, b;
  cin >> n >> m;
  G.resize(n + 1);
  for (int i = 0; i < m; i++)
  { 
    cin >> a >> b;
    G[a].push_back(b);
  }
  res = 0;
  for (int i = 1; i <= n;i++){
    for(int j=0;j<=n;j++) 
      pass[j]=false;
    dfs(i);
    for(int j=0;j<=n;j++)
      if(pass[j])res++;
  }
  cout << res << endl;
  return 0;
}
