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
  ll n, k;
  cin >> n >> k;
  ll a[n];
  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  ll sum[n+1];
  sum[0] = 0;
  for (ll i = 1; i <= n; i++)
  {
    sum[i] = sum[i - 1] + a[i - 1];
  }
  map<ll, ll> m;
  ll ans = 0;
  for (ll i = 1; i <= n; i++) {
    m[sum[i-1]]++;
    ans += m[sum[i] - k];
  }
  cout << ans << endl;
  return 0;
}
