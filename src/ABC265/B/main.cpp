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
  ll n, m, t;
  cin >> n >> m >> t;
  ll a[n], x[m], y[m];
  ll h[n+1];
  a[0] = 0;
  for (ll i = 1; i <= n-1; i++)
  {
    cin >> a[i];
  }
  for (ll i = 0; i < m; i++) {
    cin >> x[i] >> y[i];
  }
  for (ll i = 0; i <= n; i++)
  {
    h[i] = 0;
  }
  for (ll i = 0; i < m; i++)
  {
    h[x[i]] = y[i];
  }
  ll t_now;
  for (ll i = 1; i < n; i++)
  {
    //i部屋にいる。iからi+1に移動。
    t_now = t - a[i];
    //移動できるか
    if(t_now <= 0) {
      cout << "No" << endl;
      return 0;
    }
    t = t_now;
    //i+1部屋にいるので、h[i+1]の部屋ボーナスを獲得
    t += h[i+1];
    //cout << t << endl;
  }
  cout << "Yes" << endl;
  return 0;
}
