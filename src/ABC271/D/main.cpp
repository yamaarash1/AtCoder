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
bool dp[109][100009]; //i番目を使ってjを作ることができるか

int main()
{
  int n, k;
  cin >> n >> k;
  int a[n+1], b[n+1];
  for (int i = 1; i <= n;i++){
    cin >>a[i]>>b[i];
  }
  for (int i = 1; i <= n;i++){
    for (int j = 0; j <= k;j++){
      dp[i][j] = false;
    }
  }
  dp[1][a[1]] = true;
  dp[1][b[1]] = true;
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j <= k; j++)
    {
      if (dp[i][j]) {
        if (j + a[i] <= k) {
          dp[i + 1][j + a[i]] = true;
        }
        if (j + b[i] <= k) {
          dp[i + 1][j + b[i]] = true;
        }
      }
    }
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= k;j++)
    {
      cout << dp[i][j] << " ";
    }
    cout << "↓";
    cout << endl;
  }

  if(dp[n][k]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
    return 0;
  }

  int s = k;
  string ans = "";
  for (int i = n; i > 1; i--)
  {
    if (dp[i - 1][s - a[i]])
    {
      cout << s - a[i] << endl;
      ans += "H";
      s = s - a[i];
      if(i == 2) {
        if(s == a[1])
          ans += "H";
        else
          ans += "T";
      }
      continue;
    }
    if(dp[i - 1][s - b[i]]) {
      ans += "T";
      s = s - b[i];
      if(i == 2) {
        if(s == a[1])
          ans += "H";
        else
          ans += "T";
      }
      continue;
    }
  }
  if(n == 1) {
    if(dp[1][a[1]]) {
      ans += "H";
    } else {
      ans += "T";
    }
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}
