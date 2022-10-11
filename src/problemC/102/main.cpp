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
  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
    a[i] -= (i + 1);
  }
  sort(a, a + n);
  ll b = n % 2 == 1 ? a[n/2] : (a[n / 2 - 1] + a[n / 2]) / 2;
  ll ans = 0;
  rep(i,n){
    ans += abs(a[i] - b);
  }
  cout << ans << endl;
  return 0;
}
