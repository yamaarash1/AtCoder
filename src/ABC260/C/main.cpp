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
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef long long ll;

ll ans = 0;
ll n, x, y;
ll calc(bool is_red, ll level)
{
  if(level == 1) {
    if(is_red) {
      return 0;
    } else {
      return 1;
    }
  }
  if(is_red) {
    return calc(true, level - 1) + calc(false, level) * x;
  } else {
    return calc(true, level - 1) + calc(false, level - 1) * y;
  }
  return 0;
}
int main()
{
  cin >> n >> x >> y;
  ans = calc(true, n);
  cout << ans << endl;
  return 0;
}
