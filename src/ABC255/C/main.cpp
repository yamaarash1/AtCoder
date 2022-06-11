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
  ll x, a, d, n;
  cin >> x >> a >> d >> n;
  x = x - a;
  ll div;
  if (d == 0){
    cout << x << endl;
    return 0;
  }
  if(d >= 0 && x <= 0){
    cout << abs(x) << endl;
    return 0;
  }
  if(d <= 0 && x >= 0){
    cout << abs(x) << endl;
    return 0;
  }
  if(d >= 0 && x >= 0){
    div = x / d;
    ll x_a, x_b, x_c;
    if (div >= n)
    {
      div = n;
      x_a = d * (div - 2);
      x_b = d * (div - 1);
      x_c = d * div;
    }else {
      x_a = d * (div - 1);
      x_b = d * div;
      x_c = d * (div + 1);
    }
    ll ans = min(abs(x_a - x), min(abs(x_b - x), abs(x_c - x)));
    cout << ans << endl;
  }
  return 0;
}
