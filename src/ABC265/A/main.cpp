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
  int x, y, n;
  cin >> x >> y >> n;
  int ans;
  if (x <= y / 3)
  {
    ans = n * x;
  } else {
    ans = (n / 3) * y + (n % 3) * x;
  }
  cout << ans << endl;
  return 0;
}
