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
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef long long ll;

int main() { 
  ll n, m;
  cin >> n >> m;
  ll a[n];
  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  ll dp[n][m+1];
  for (ll i = 0; i < n;i++){
    for (ll j = 0; j <= m;j++){
      dp[i][j] = -1000000000000000000ll;
    }
  }
    dp[0][1] = a[0];
  for (ll i = 1; i < n; i++)
  {
    dp[i][1] = max(dp[i - 1][1], a[i]);
  }
  for (ll i = 0; i < n;i++){
    for (ll j = 2; j <= m;j++){
      if(j>(i+1))
        continue;
      dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] + j * a[i]);
    }
  }
  //for (ll i = 0; i < n;i++){
  //  for (ll j = 1; j <= m;j++){
  //    cout << dp[i][j] << " ";
  //  }
  //  cout << endl;
  //}
  cout << dp[n - 1][m] << endl;
  return 0;
}
