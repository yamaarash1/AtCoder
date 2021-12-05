#include <iostream>
#include <cstring>
#include <cstdio>
#include<algorithm>
#include <queue>
#include <cmath>
#include <limits>
#include <map>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  double input;
  cin >> input;
  int x, y;
  x = input;
  y = 10 * (input - x);
  if (y >= 0 && 2 >= y) cout << x << "-" << endl;
  if (y >= 3 && 6 >= y) cout << x << endl;
  if (y >= 7 && 9 >= y) cout << x << "+" << endl;
  return 0;
}
