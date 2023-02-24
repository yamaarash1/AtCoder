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
  int n, m;
  cin >> n >> m;
  int a[n];
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }
  sort(a, a + n);
  int dp[n];
  int order = 0;
  while(order < n) {
    
  }

  return 0;
}
