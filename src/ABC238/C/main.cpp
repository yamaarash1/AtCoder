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
  ll n;
  ll mod = 998244353;
  cin >> n;
  ll tmp = n;
  ll len = 0;
  while (tmp > 0)
  {
    len++;
    tmp = tmp / 10;
  }
  ll ans = 0;

  for (ll i = 1; i <= 9; i++)
  {
    ans += i;
    if(n<i)
      break;
  }

  for (ll i = 2; i < len; i++)
  {
    ll keta = pow(10, i-1);
    ans += ((9 * keta) * ((9 * keta) + 1) / 2);
    ans = ans % mod;
  }

  ll keta = pow(10, len-1);
  tmp = n - keta + 1;
  ans += tmp * (tmp + 1) / 2;
  cout << ans << endl;
  return 0;
}
