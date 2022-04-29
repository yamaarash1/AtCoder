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

  int A[n];
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  int dp[n][n];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      dp[i][j] = 0;
    }
  }
  dp[0][A[0]] = 1;
  for (int i = 1; i < n; i++)
  {
    dp[i][A[i]] += dp[i - 1][A[i]] + 1;
  }

  int q;
  cin >> q;

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << dp[i][j] << " ";
    }
    cout << endl;
  }

  //for (int i = 0; i < q; i++){
  //  int l, r, x;
  //  cin >> l >> r >> x;
  //  l--;
  //  r--;
  //  int ans = 0;
  //  if (l - 1 >= 0)
  //  {
  //    ans = dp[r][x] - dp[l-1][x];
  //  } else{
  //    ans = dp[r][x];
  //  }
  //  cout << ans << endl;
  //}
  return 0;
}
