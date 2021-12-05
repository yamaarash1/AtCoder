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

int main() {
  static const long double pi = 3.141592653589793;
  long double T, L, X, Y;
  int Q;
  cin >> T >> L >> X >> Y >>Q;
  long double E[Q];
  rep(i, Q) cin >> E[i];
  for (int i = 0; i < Q;i++){
    long double X1 = 0;
    long double Y1 = - ((L / 2) * sin(2 * pi * E[i] / T));
    long double Z1 = (L / 2) * (1 - cos(2 * pi * E[i] / T));

    long double b = Z1;
    long double a = sqrt(pow(X,2) + pow((Y1 - Y),2));

    long double rad = atan2(b, a);

    long double res = rad * 180 / pi;
    cout << fixed << setprecision(10) << res << endl;
  }
  return 0;
}
