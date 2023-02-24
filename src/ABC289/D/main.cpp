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
  int n;
  cin >> n;
  int a[n];
  rep(i, n) cin >> a[i];
  int m;
  cin >> m;
  int b[m];
  int x;
  rep(i, m) {
    cin >> b[i];
  }
  cin >> x;
  vector<int> dp(x + 1);

  dp[0] = 1;
  for (int i = 0; i < m;i++){
    dp[b[i]] = -1;
  }
  for (int i = 0; i <= x; i++)
    {
      if (dp[i] == -1)
        continue;
      if (dp[i] == 1)
      {
        for (int j = 0; j < n; j++)
        {
          if (i + a[j] > x)
            continue;
          if (dp[i + a[j]] < 0)
            continue;
          dp[i + a[j]] = 1;
        }
      }
    }
  //for (int i = 0;i <=x; i++) {
  //  cout << dp[i] <<" ";
  //}
  //cout << endl;
  if (dp[x] == 1)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
