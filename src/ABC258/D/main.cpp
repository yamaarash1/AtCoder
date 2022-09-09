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
  ll n, x;
  cin >> n >> x;
  ll a[n], b[n];
  for (ll i = 0; i < n;i++){
    cin >> a[i] >> b[i];
  }
  ll calc[n];
  calc[0] = 0;
  for (ll i = 1; i < n; i++)
  {
    calc[i] = calc[i-1] + a[i-1] + b[i-1];
  }
  ll time[n];
  for (ll i = 0; i < n;i++){
    time[i] = numeric_limits<long long>::max();
  }
  for (ll i = 0; i < n;i++){
    if(x <= i) {
      break;
    }
    time[i] = calc[i] + a[i] + b[i] * (x - i);
  }
  ll ans = numeric_limits<long long>::max();
  for (ll i = 0; i < n; i++)
  {
    ans = min(ans, time[i]);
  }
  cout << ans << endl;
  return 0;
}
