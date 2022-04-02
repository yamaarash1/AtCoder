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
  int a, b;
  cin >> a >> b;
  long double c = sqrt(a * a + b * b);
  long double x = a / c;
  long double y = b / c;
  cout << fixed << setprecision(10) << x << " " << y << endl;
  return 0;
}
