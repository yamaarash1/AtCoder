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
int n, x;
int a[109], b[109];
int main() {
  cin >> n >> x;
  for (int i = 0; i < n;i++){
    cin >> a[i] >> b[i];
  }
  int dp[n][x+1];
  for (int i = 0; i < n; i++){
    for (int j = 0; j <= x;j++){
      dp[i][j] = 0;
    }
  }
  dp[0][a[0]] = 1;
  dp[0][b[0]] = 1;
  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j <= x; j++){
      if(dp[i][j] && j + a[i+1] <= x){
        dp[i+1][j + a[i+1]] = 1;
      }
      if(dp[i][j] && j + b[i+1] <= x){
        dp[i+1][j + b[i+1]] = 1;
      }
    }
  }

  if(dp[n-1][x]){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
