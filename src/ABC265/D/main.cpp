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
vector<ll> sum;

pair<bool, ll> check(ll t) {
  vector<ll>::iterator position = lower_bound(sum.begin(), sum.end(), t);
  ll idx_lower = position - sum.begin();
  if(sum[idx_lower] == t) {
    return {true, idx_lower};
  } else{
    return {false, 0};
  }
}

int main() {
  ll n, p, q, r;
  cin >> n >> p >> q >> r;
  ll s = 0;
  sum.push_back(s);
  for (ll i = 0; i < n; i++) {
    ll a;
    cin >> a;
    s += a;
    sum.push_back(s);
  }
  sort(sum.begin(), sum.end());
  pair<bool, ll> res = check(s - r);
  if (res.first) {
    res = check(sum[res.second+1] - q);
    if(res.first) {
      res = check(sum[res.second+1] - p);
      if(res.first) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
