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
  int n, k;
  cin >> n >> k;
  int A[n];
  int dp[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n;j++){
      dp[i][j] = 0;
    }
  }
  for (int i = 0; i < n;i++){
    cin >> A[i];
    dp[i][i] = A[i];
  }
  for (int i = 0; i < n;i++){
    for (int j = i+1; j < n;j++){
      if(i == j)
        continue;
      dp[i][j] = dp[i][j - 1] + A[j];
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n;j++){
      if(dp[i][j] == k)
        ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
