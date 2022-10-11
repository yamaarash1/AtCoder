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
  int n, k;
  cin >> n >> k;
  int a[n];
  int min_a = 100000000;
  if (n == k)
  {
    cout << 1 << endl;
    return 0;
  }
  long double up = n - 1;
  long double down = k - 1;
  int ans = ceil(up / down);
  cout << ans << endl;
  return 0;
}
