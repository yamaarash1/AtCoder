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
  int n,k;
  cin >> n>>k;
  int h[n];
  const int inf = 1000000;
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  int dp[n];
  for (int i = 0; i < n; i++) {
    dp[i] = inf;
  }
  dp[0] = 0;
  dp[1] = abs(h[0] - h[1]);
  for (int i = 2; i < n;i++){
    dp[i] = dp[i - 1] + abs(h[i - 1] - h[i]);
    for (int j = k; j >= 1 ;j--){
      if(i-j<0) continue;
      dp[i] = min(dp[i], dp[i - j] + abs(h[i - j] - h[i]));
    }
  }
  cout << dp[n - 1] << endl;
  return 0; 
}
