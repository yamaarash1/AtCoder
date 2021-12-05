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
  string S;
  string T = "chokudai";
  const int mod = 1000000007;
  cin >> S;
  int n = S.size();
  int dp[n + 1][9];
  for (int i = 0; i < n+1; i++) {
    for (int j = 0; j < 9;j++){
      dp[i][j] = 0;
    }
  }
  for (int i = 0; i < S.length()+1; i++) {
    dp[i][0] = 1;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 9;j++){
      if(S[i]==T[j]){
        dp[i+1][j+1] = (dp[i][j] + dp[i][j+1]) % mod;
      }else{
        dp[i+1][j+1] = dp[i][j+1];
      }
    }
  }
  //for (int i = 0; i < n+1; i++) {
  //  for (int j = 0; j < 9;j++){
  //    cout << dp[i][j] << " ";
  //  }
  //  cout << endl;
  //}

  cout << dp[n][8] << endl;
  return 0;
}
