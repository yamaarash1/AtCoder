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

int main() {
  static const double pi = 3.141592653589793;
  long double a, b, d;
  cin >> a >> b >> d;
  long double ans_a = a * cos(d * (pi / 180)) - b * sin(d * (pi / 180));
  long double ans_b = b * cos(d * (pi / 180)) + a * sin(d * (pi / 180));
  cout << fixed << setprecision(15) << ans_a << " " << ans_b << endl;
  return 0;
}
