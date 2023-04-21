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
  ll n,m,k;
  cin >> n >> m >> k;
  vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));//n個目の合計がkになる数
  for (ll i = 1; i <= m; i++){
    dp[1][i] = 1;
  }
  for (ll i = 2; i <= n; i++) {
    for (ll j = 1; j <= k; j++) {
      for(ll l = 1; l <= m; l++){
        if(j - l > 0){
          dp[i][j] += dp[i - 1][j - l] % mod;
        }
      }
    }
  }
  //for (ll i = 1; i <= n; i++) {
  //  for (ll j = 1; j <= k; j++) {
  //    cout << dp[i][j] << " ";
  //  }
  //  cout << endl;
  //}
  ll ans = 0;
  for (ll i = 1; i <= k; i++){
    ans += dp[n][i] % mod;
  }
  ans %= mod;
  cout << ans << endl;
  return 0;
}
