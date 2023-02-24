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
  int n;
  cin >> n;
  int a[n+1];
  for (int i = 1; i <= n;i++){
    cin >> a[i];
  }
  int dp[2 * n + 2];
  for (int i = 1; i <= 2*n+1;i++){
    dp[i] = 0;
  }

  for (int i = 1; i <= n;i++){
    dp[2*i] = dp[a[i]] + 1;
    dp[2*i + 1] = dp[a[i]] + 1;
  }

  for (int i = 1; i <= 2*n+1;i++){
    cout << dp[i] << endl;
  }
    return 0;
}
