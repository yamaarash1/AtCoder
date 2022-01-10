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

const int MAX_N = 25; // nの最大値

// 入力
int n, W;
int w[MAX_N], v[MAX_N];
int dfs(int o, int sum){
  int res;
  if(o==n){
    res = 0;
  }else if(w[o] <= sum){
    res = max(dfs(o + 1, sum - w[o]) + v[o], dfs(o + 1, sum));
  }else{
    res = dfs(o + 1, sum);
  }
  return res;
}

void solve() {
  cin >> n >> W;
  for (int i = 0; i < n;i++){
    cin >> w[i] >> v[i];
  }
    cout << dfs(0, W) << endl;
}