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
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define mod 998244353;

int main() {
  ll n;
  cin >> n;
  ll a[n+1];
  for (ll i = 1; i < n+1;i++){
    cin >> a[i];
  }
  vector<vector<ll>> dp(n+1, vector<ll>(10, 0));
  dp[1][a[1]] = 1;
  for (ll i = 1; i <= n - 1; i++) {
    for (ll j = 0; j <= 9;j++){
      dp[i+1][(j+a[i+1])%10] += dp[i][j] % mod;
      dp[i+1][(j*a[i+1])%10] += dp[i][j] % mod;
    }
  }
  for (ll i = 0; i <= 9;i++){
    int ans = dp[n][i] % mod;
    cout << ans << endl;
  }
  return 0;
}
