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
  int n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;
  if(x <= m && n >= m){
    cout << t << endl;
    return 0;
  }
  int ans = t - d * (x - m);
  cout << ans << endl;

  return 0;
}
