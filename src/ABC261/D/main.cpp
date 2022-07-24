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
  ll n, m;
  cin >> n >> m;
  ll x[n], c[m], y[m];
  for (ll i = 0; i < n;i++){
    cin >> x[i];
  }
  for (ll i = 0; i < m; i++)
  {
    cin >> c[i] >> y[i];
  }

  //dp初期化
  ll dp[n][n+1];
  for (ll i = 0; i < n;i++){
    for (ll j = 0; j < n+1; j++)
    {
      dp[i][j] = 0;
    }
  }

  //ボーナスの整形
  ll bo[n+1];
  for (ll i = 0; i < n+1;i++){
    bo[i] = 0;//i回出た時のボーナスは0点
  }
  for (ll i = 0; i < m;i++){
    bo[c[i]] = y[i];
  }

  dp[0][0] = 0;
  dp[0][1] = x[0]+ bo[1];
  // dp計算
  // i番目に降った時、カウントがj
  for (ll i = 1; i < n; i++)
  {
    for (ll j = 0; j <= i + 1; j++)
    {
      if (j != 0)
      {
        dp[i][j] = dp[i - 1][j - 1] + x[i] + bo[j];
      }
      else
      {
        ll max_dp = 0;
        for (ll k = 0; k <= i; k++)
        {
          if (max_dp < dp[i - 1][k])
            max_dp = dp[i - 1][k];
        }
        dp[i][0] = max_dp;
      }
    }
  }
  ll ans = 0;
  //最後のコイントスの最大値が答え
  for (ll i = 0; i < n + 1;i++){
    if(ans < dp[n-1][i])
      ans = dp[n - 1][i];
  }
  cout << ans << endl;
  //for (ll i = 0; i < n;i++){
  //  for (ll j = 0; j < n +1;j++){
  //    cout << dp[i][j] << " ";
  //  }
  //  cout << endl;
  //}
  return 0;
}
