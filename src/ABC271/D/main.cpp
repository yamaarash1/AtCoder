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
  int n, s;
  cin >> n >> s;
  int a[n], b[n];
  for (int i = 0; i < n;i++){
    cin >> a[i] >> b[i];
  }
  bool dp[n][s+1];
  for (int i = 0; i < n;i++){
    for (int j = 0; j <= s; j++){
      dp[i][j] = false;
    }
  }
  dp[0][0] = true;
  for (int i = 0; i < n; i++){
    for (int j = 0; j <= s; j++){
      if(dp[i-1][j]) {
        if (j + a[i] <= s) {
          dp[i + 1][j + a[i]] = true;
        }
        if (j + b[i] <= s) {
          dp[i + 1][j + b[i]] = true;
        }
      }
    }
  }
  if (dp[n][s]) {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
    return 0;
  }
  string ans = "";
  for (int i = n - 1; i >= 0; --i)
  {
    if (s >= a[i] && dp[i][s - a[i]]) {
      ans += 'H';
      s -= a[i];
    } else {
      ans += 'T';
      s -= b[i];
    }
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}
