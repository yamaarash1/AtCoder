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
#define mod 998244353;

ll f(ll n, ll keta, ll ten) {
  if(keta == 1) {
    return n * (n + 1) / 2;
  }
  ll m = ten / 10 - 1;
  return (n * (n + 1) - m * (m + 1) - m * 2 * (n - m)) / 2;
}

int main() {
  ll n;
  cin >> n;
  ll keta = 1;
  ll tmp = n;
  while(tmp / 10) {
    keta++;
    tmp /= 10;
  }
  ll ans = 0;
  ll ten = 1;
  for (ll i = 1; i <= keta; i++)
  {
    ten *= 10;
    if (i == keta)
    {
      ans += f(n, i, ten) % mod;
    }
    else
    {
      ans += f(ten - 1, i, ten) % mod;
    }
    cout << i << ": " << ans << endl;
  }
  ans %= mod;
  cout << ans << endl;
  return 0;
}
