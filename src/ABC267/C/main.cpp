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

int main() {
  ll n, m;
  cin >> n >> m;
  ll a[n];
  ll sum[n];
  cin >> a[0];
  sum[0] = a[0];
  for (ll i = 1; i < n;i++){
    cin >> a[i];
    sum[i] = sum[i - 1] + a[i];
  }
  vector<ll> dp(n, 0);
  for (ll i = 0; i < m;i++){
    dp[0] += a[i] * (i + 1);
  }
  for (ll i = 1; i < n - m + 1; i++) {
    if(i == 1) dp[i] = dp[i - 1] - sum[m - 1 + i - 1] + a[m - 1 + i] * m;
    else dp[i] = dp[i - 1] - (sum[m - 1 + i - 1] - sum[i - 2]) + a[m - 1 + i] * m;
  }
  ll ans = - LL_MAX;
  for (ll i = 0; i < n - m + 1;i++){
    ans = max(ans, dp[i]);
  }
  cout << ans << endl;
  return 0;
}
