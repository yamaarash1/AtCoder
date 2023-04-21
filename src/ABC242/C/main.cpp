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
#define mod 998244353;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> dp(n + 1, vector<int>(10, 0));
  for (int i = 1;i <= 9; i++){
    dp[1][i] = 1;
  }
  for (int i = 1; i < n; i++){
    for(int j = 1; j <= 9; j++){
      if(j == 1) {
        dp[i + 1][j] += dp[i][j];
        dp[i + 1][j] %= mod;
        dp[i + 1][j] += dp[i][j + 1];
        dp[i + 1][j] %= mod;
      } else if (j == 9) {
        dp[i + 1][j] += dp[i][j];
        dp[i + 1][j] %= mod;
        dp[i + 1][j] += dp[i][j - 1];
        dp[i + 1][j] %= mod;
      } else {
        dp[i + 1][j] = dp[i][j];
        dp[i + 1][j] %= mod;
        dp[i + 1][j] += dp[i][j - 1];
        dp[i + 1][j] %= mod;
        dp[i + 1][j] += dp[i][j + 1];
        dp[i + 1][j] %= mod;
      }
    }
  }
  int ans = 0;
  for (int i = 1; i <= 9; i++){
    ans = (ans + dp[n][i]) % mod;
  }
  ans %= mod;
  cout << ans << endl;
  return 0;
}
