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
  int n, x;
  cin >> n >> x;
  int a[n+1], b[n+1];
  for (int i = 1; i <= n;i++){
    cin >> a[i] >> b[i];
  }
  vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0)); // dp[i][j] = i番目までのコインを使ってj円作れるかどうか
  for (int i = 0; i <= n;i++){
    dp[i][0] = 1;
  }
  for (int i = 1; i <= n; i++)
    {
    for (int j = 0; j <= x;j++){
      for (int k = 1; k <= b[i];k++){
        if(dp[i-1][j] == 1) {
          dp[i][j] = 1;
        }
        if (j - a[i] * k >= 0)
        {
          if(dp[i-1][j - a[i] * k] == 1)
            dp[i][j] = 1;
        }
      }
    }
    }
  //for (int i = 0; i <= n; i++) {
  //  cout << i << ": " << endl;
  //  for (int j = 0; j <= x; j++)
  //  {
  //    cout << dp[i][j] << " ";
  //  }
  //  cout << endl;
  //}
  if(dp[n][x] == 1)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
