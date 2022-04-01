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
  double a, b, c, x;
  cin >> a >> b >> c >> x;
  if(x<=a){
    cout << 1 << endl;
    return 0;
  }
  if(x>b){
    cout << 0 << endl;
    return 0;
  }
  double ans = c / (b - a);
  cout << ans << endl;
  return 0;
}
