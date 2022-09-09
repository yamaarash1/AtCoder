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
  ll n;
  cin >> n;
  ll t[n], x[n], a[n];
  ll t_max = 0;
  for (ll i = 0; i < n; i++)
  {
    cin >> t[i] >> x[i] >> a[i];
    t_max = max(t[i], t_max);
  }
  pair<ll,ll> x_a[t_max+1];
  for (ll i = 0; i <= t_max; i++){
    x_a[i] = {0,0};
  }
  for (ll i = 0; i < n; i++){
    x_a[t[i]] = {x[i],a[i]};
  }
  ll dp[t_max + 1][5]; 
  for (ll i = 0; i <= t_max; i++) {
    for (ll j = 0; j <= 4;j++){
      dp[i][j] = 0;
    }
  }
  for (ll i = 1; i <= 4; i++) {
    dp[0][i] = -1;
  }
  //座標jに時刻iの時にいたときの取得できる大きさの合計
  for (ll i = 1; i <= t_max; i++) {
    for (ll j = 0; j <= 4;j++){
      //動かなかった場合を暫定1位とする
      dp[i][j] = dp[i-1][j]; 
      if(j != 0){
        //座標0以外の時、1秒前の左隣の座標から移動できる。
        dp[i][j] = max(dp[i][j], dp[i - 1][j - 1]);
      }
      if(j != 4) {
        //座標4以外の時、1秒前の右隣の座標から移動できる。
        dp[i][j] = max(dp[i][j], dp[i - 1][j + 1]);
      }
    }
    dp[i][x_a[i].first] += dp[i][x_a[i].first] != -1 ? x_a[i].second : 0;
    //cout << i << ": " << x_a[i].first << " " << x_a[i].second << endl;
  }
 // for (ll i = 0; i <= t_max; i++) {
 //   for (ll j = 0; j <= 4;j++){
 //     cout << dp[i][j] << " ";
 //   }
 //   cout << endl;
 // }
  ll ans = 0;
  for (ll i = 0; i <= 4; i++)
  {
    ans = max(ans, dp[t_max][i]);
  }
  cout << ans << endl;
  return 0;
}
