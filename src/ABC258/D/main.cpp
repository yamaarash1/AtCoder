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
  ll n, x;
  cin >> n >> x;
  ll a[n], b[n];
  rep(i, n) cin >> a[i] >> b[i];
  ll min_clear_time = b[0];//最小時間でクリアできるステージのクリア時間
  ll all_clear_time[n];//ステージiまでのステージを全てクリアする時間
  ll min_x_clear_time[n];//ステージiまででx回クリア可能な最小のクリア時間
  all_clear_time[0] = a[0] + b[0];
  min_x_clear_time[0] = a[0] + b[0] + (b[0] * (x - 1));
  ll ans = 0;
  for (ll i = 1; i < n; i++)
  {
    all_clear_time[i] = all_clear_time[i - 1] + a[i] + b[i];
    min_clear_time = min(min_clear_time, b[i]);
    min_x_clear_time[i] = min(all_clear_time[i] + min_clear_time * (x - i - 1), min_x_clear_time[i - 1]);
  }
  cout << min_x_clear_time[n - 1] << endl;
  return 0;
}
