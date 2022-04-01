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
#define mod 998244353

int main() {
  int n;
  cin >> n;
  int dp[n + 1][10] = {0};
  for (int i = 1; i <= 9; i++)
  {
    dp[1][i] = 1;
  }
  for (int i = 2; i <= n;i++){
    for (int j = 1; j < 10;j++){
      for (int k = max(1, j - 1); k <= min(9, j + 1);k++){
        dp[i][j] += dp[i - 1][k];
        dp[i][j] %= mod;
      }
    }
  }
  int res = 0;
  for (int i = 1; i <= 9; i++)
  {
    res += dp[n][i];
    res %= mod;
  }
  cout << res << endl;
  return 0;
}
