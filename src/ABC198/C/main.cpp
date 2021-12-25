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
  double r, x, y;
  cin >> r >> x >> y;
  double dis = sqrt(x * x + y * y);
  if(dis == r){
    cout << 1 << endl;
    return 0;
  }
  if(dis<=2*r){
    cout << 2 << endl;
    return 0;
  }
  int ans = ceil(dis / r);
  cout << ans << endl;
  return 0;
}
