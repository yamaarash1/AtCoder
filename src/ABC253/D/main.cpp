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

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

long long lcm(long long a, long long b) {
    long long d = gcd(a, b);
    return a / d * b;
}

int main() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll sum = n * (n + 1) / 2;
  ll a_sum = (n / a) * (2 * a + ((n / a) - 1) * a) / 2;
  ll b_sum = (n / b) * (2 * b + ((n / b) - 1) * b) / 2;
  ll ab = lcm(a, b);
  ll ab_sum = (n / ab) * (2 * ab + ((n / ab) - 1) * ab) / 2;
  ll ans = sum - a_sum - b_sum + ab_sum;
  //cout <<sum <<" " << a_sum << " " << b_sum << " " << ab_sum << endl;
  cout << ans << endl;
  return 0;
}
