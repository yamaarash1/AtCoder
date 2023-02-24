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
  ll x, a, d, n;
  cin >> x >> a >> d >> n;
  if(d == 0) {
    cout << abs(a - x) << endl;
    return 0;
  }
  if (d < 0) {
    ll fi= a + d * (n - 1);
    a = fi;
    d *= -1;
  }
  if(x < a) {
    cout << abs(a-x) << endl;
    return 0;
  }
  if(x > a + (n-1)*d) {
    cout << abs(a + (n-1)*d - x) << endl;
    return 0;
  }
  ll y = x - a;
  ll z = y % d;
  ll ans = min(z, abs(d - z));
  cout << ans << endl;
  return 0;
}
