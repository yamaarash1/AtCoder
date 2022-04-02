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
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef long long ll;

int main() {
  ll n, w;
  cin >> n >> w;
  ll W[n], V[n];
  ll dp[n+1][w+1];
  for (ll i = 1; i < n+1;i++){
    cin >> W[i] >> V[i];
  }
  for (ll i = 0; i < n+1; i++)
  {
    for (ll j = 0; j < w+1;j++){
      dp[i][j] = 0;
    }
  }
  for (ll i = 1; i < n+1; i++){
    for (ll j = 0; j < w+1; j++){
      if(j - W[i] >= 0){
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i]] + V[i]);
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  ll ans = dp[n][w];
  cout << ans << endl;
  return 0;
}
