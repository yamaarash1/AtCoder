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
  ll n, l, r;
  cin >> n >> l >> r;
  ll a[n];
  ll sum = 0;
  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }
    ll f[n + 1], g[n + 1];
  f[0] = 0;
  for (ll i = 1; i <= n; i++)
  {
    //i番目の時、a[i]をlに変えて足した方がいいのか変えずに足した方がいいのか
    f[i] = min(f[i - 1] + a[i-1], l * i);
    //cout << f[i] << " ";
  }
  //cout << endl;
  g[0] = 0;
  for (ll i = 1; i <= n; i++)
  {
    g[i] = min(g[i - 1] + a[n - i], r * i);
    //cout << g[i] << " ";
  }
  //cout << endl;
  ll ans = sum + 99999999;
  for (ll i = 0; i <= n;i++){
    ll tmp = f[i] + g[n - i];
    ans = min(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}