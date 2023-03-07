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
  ll a[n], b[n];
  for (ll i = 0; i < n;i++){
    cin >> a[i] >> b[i];
  }
  vector<vector<ll>> dp(n + 1, vector<ll>(2, 0));
  dp[0][0] = 1;
  dp[0][1] = 1;
  for (ll i = 1; i < n; i++)
  {
    if(a[i-1] != a[i]) {
      dp[i][0] += dp[i - 1][0] % mod;
    }
    if(b[i-1] != a[i]) {
      dp[i][0] += dp[i - 1][1] % mod;
    }
    if(a[i-1] != b[i]) {
      dp[i][1] += dp[i - 1][0] % mod;
    }
    if(b[i-1] != b[i]) {
      dp[i][1] += dp[i - 1][1] % mod;
    }
  }
  ll ans = (dp[n - 1][0] + dp[n - 1][1]) % mod;
  cout << ans << endl;
  return 0;
}
