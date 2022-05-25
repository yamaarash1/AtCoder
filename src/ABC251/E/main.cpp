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
#define inf 1e18;

int main() {
  ll n;
  cin >> n;
  ll a[n+1];
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }

  ll ans = inf;
  ll dp[n+1][2];

  for (int i = 0;i <= n; i++){
    for (int j = 0; j < 2; j++){
      dp[i][j] = 0;
    }
  }

  for (int i = 0; i <= 1; i++)
  {
    dp[1][i] = a[1] * i;
    dp[1][1 - i] = inf;
    for (int j = 2; j <= n; j++)
    {
      dp[j][0] = dp[j - 1][1];
      dp[j][1] = min(dp[j - 1][0], dp[j - 1][1]) + a[j];
    }
    if (i == 0)
    {
      ans = min(ans, dp[n][1]);
    }
    if (i == 1){
      ans = min(ans, min(dp[n][0], dp[n][1]));
    }
  }
  cout << ans << endl;
  return 0;
}
