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
  int h, w;
  cin >> h >> w;
  string c[h];
  for (int i = 0; i < h;i++){
    cin >> c[i];
  }
  vector<vector<int>> dp(h, vector<int>(w, 0));
  for (int i = 0; i < h; i++){
    for(int j = 0; j < w;j++){
      if(c[i][j] == '#')
        continue;
      if(i == 0 && j == 0) {
        dp[i][j] = 1;
      } else if (i==0) {
        dp[i][j] = dp[i][j - 1] + 1;
      } else if (j==0) {
        dp[i][j] = dp[i - 1][j] + 1;
      }else {
        dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]) + 1;
      }
    }
  }
  //for (int i = 0; i < h; i++)
  //{
  //  for(int j = 0; j < w;j++){
  //    cout << dp[i][j] << " ";
  //  }
  //  cout << endl;
  //}
  int ans = -1;
  for (int i = 0; i < h; i++)
  {
    for(int j = 0; j < w;j++){
      ans = max(dp[i][j], ans);
    }
  }
  cout << ans << endl;
  return 0;
}
