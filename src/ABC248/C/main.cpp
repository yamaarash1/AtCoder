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
#define mod 998244353

int main() {
  ll n, m, k;
  cin >> n >> m >> k;
  ll dp[n + 1][k + 1]; //n桁目で和がkである

  for (ll i = 0; i <= n;i++){
    for (ll j = 0; j <= k;j++){
      dp[i][j] = 0;
    }
  }

  for (ll i = 1; i <= m;i++){
    dp[1][i] = 1;
  }

  for (ll i = 2; i <= n;i++){
    for (ll j = 1; j <= k;j++){
      for (ll l = 1; j - l > 0; l++){
        dp[i][j] += dp[i - 1][j - l];
        dp[i][j] %= mod;
      }
    }
  }

  ll ans = 0;
  for (ll j = 1; j <= k; j++){
    ans += dp[n][j];
    ans %= mod;
  }

  ans %= mod;
  cout << ans << endl;
  return 0;
}
