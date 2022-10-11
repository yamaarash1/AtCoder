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
  int x, y, z;
  cin >> x >> y >> z;
  //原点とゴールの間に障壁がない場合
  if(x<0) {
    if(y < x || 0 < y) {
      cout << abs(x) << endl;
      return 0;
    }
  } else if (x > 0) {
    if(y<0 || x < y) {
      cout << abs(x) << endl;
      return 0;
    }
  }
  //原点とゴールの間に障壁があり、ハンマーが入手できるか
  if(x>0) {
    if(z > y) {
      cout << -1 << endl;
      return 0;
    } else {
      if()
    }
  }

  return 0;
}
