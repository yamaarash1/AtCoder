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
  double n,k;
  cin >> n >> k;
  double ans = 0;
  for (int i = 1; i <= n; i++)
  {
    double tmp = i;
    double rate = 1 / n;
    while(tmp < k) {
      tmp *= 2;
      rate /= 2;
    }
    ans += rate;
  }
  cout <<  std::fixed << std::setprecision(15) << ans << endl;
  return 0;
}
