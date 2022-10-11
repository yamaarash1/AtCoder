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
  ll n;
  cin >> n;
  ll a[n];
  map<ll, ll> cnt;
  for (ll i = 0; i < n; i++)
  {
    ll a;
    cin >> a;
    cnt[a]++;
  }
  ll ans = n * (n - 1) / 2;
  for(auto x:cnt){
    if(x.second ==1)
      continue;
    ans -= x.second * (x.second - 1) / 2;
  }
  cout << ans << endl;
  return 0;
}
