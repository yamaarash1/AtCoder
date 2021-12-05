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
  ll N;
  cin >> N;
  ll max3 = cbrt(N);
  ll ans = 0;
  bool jump = false;
  for (ll i = 1; i <= max3; i++) {
    ll count = 0;
    for (ll j = i; j <= sqrt(N/i); j++) {
      if (i * j == N){
        jump = true;
        break;
      }
      ll AB = i * j;
      ll pos = N / AB;
      ans +=  N / i / j - j + 1;
      count++;
    }
    if (jump) break;
  }
  cout << ans << endl;
  return 0;
}
