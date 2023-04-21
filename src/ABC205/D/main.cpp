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
  ll n, q;
  ll ans;
  cin >> n >> q;
  vector<ll> a;
  for (ll i = 0; i < n; i++) {
    ll num;
    cin >> num;
    a.push_back(num);
  }
  vector<ll> v;
  for (int i = 0; i < n; ++i) {
    v.push_back(a[i] - (i + 1));
  }
  for (ll i = 0; i < q; i++) {
    ll k;
    cin >> k;
    const int idx = lower_bound(v.begin(), v.end(), k) - v.begin();
    if (k >= n) {
      cout << a[n-1] + (k - v[n - 1]) << endl;
    }
    else
    {
      cout << a[idx] - (v[idx] - k + 1) << endl;
    }
  }
  return 0;
}
