#include <iostream>
#include <cstring>
#include <cstdio>
#include<algorithm>
#include <queue>
#include <cmath>
#include <limits>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int X;
  cin >> X;
  int x_per = X % 100;
  int x_waru = X / 100;
  if (x_per == 0 && x_waru > 0)
    cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
