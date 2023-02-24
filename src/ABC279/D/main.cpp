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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

long double a, b;

long double f (ll n) {
  return  a / sqrt(n + 1) + b * n;
}

int main() {
  cin >> a >> b;
  vector<long double> t;
  long double ans = pow(a / (b * 2), 2.0 / 3.0) - 1;
  long double ans_ceil = (long double) ceil(ans);
  long double ans_floor = (long double) floor(ans);
  for (int i = 0; i < 10; i++) {
    if(ans_floor - i >= 0) {
      t.push_back(ans_floor - (long double) i);
    }
    if(ans_ceil + i >= 0) {
      t.push_back(ans_ceil + (long double) i);
    }
  }
  long double y = f(ans_ceil);
  for (auto x : t)
  {
    cout << x << ": " << f(x) << endl;
    y = min(y, f(x));
  }
  cout << fixed << setprecision(10) << y << endl;
  return 0;
}
