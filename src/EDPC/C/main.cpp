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
  int n;
  cin >> n;
  int abc[n][3];
  for (int i = 0; i < n; i++)
  {
    cin >> abc[i][0] >> abc[i][1] >> abc[i][2];
  }
  int dp[n][3];
  rep(i, 0) rep(j,3) dp[i][j] = 0;
  dp[0][0] = abc[0][0];
  dp[0][1] = abc[0][1];
  dp[0][2] = abc[0][2];
  for (int i = 0; i < n - 1; i++)
  {
    dp[i + 1][0] = max(dp[i][1] + abc[i+1][0], dp[i][2] + abc[i+1][0]);
    dp[i + 1][1] = max(dp[i][0] + abc[i+1][1], dp[i][2] + abc[i+1][1]);
    dp[i + 1][2] = max(dp[i][0] + abc[i+1][2], dp[i][1] + abc[i+1][2]);
  }
  int res = max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));
  cout << res << endl;
  return 0;
}