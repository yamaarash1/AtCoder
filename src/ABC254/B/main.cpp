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
  int dp[n][n];
  for (int i = 0; i < n; i++)
  {
    dp[i][0] = 1;
    dp[i][i] = 1;
  }
  for (int i = 2; i < n;i++){
    for (int j = 1; j < i;j++){
      dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    }
  }
  for (int i = 0; i < n; i++){
    for (int j = 0; j <= i; j++){
      cout << dp[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
