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

int main() {
  long double a, b;
  cin >> a >> b;
  long double ans = round(((b / a) * 1000))/1000;
  cout << fixed << setprecision(3) << ans << endl;
  return 0;
}
