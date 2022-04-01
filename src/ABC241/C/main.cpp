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
  char S[n][n];
  int dp[n][n];
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < n; j++){
      if(s[j] == '#')
        dp[i][j] = 1;
      else
        dp[i][j] = 0;
    }
  }
  int count = 0;
  bool ans = false;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++){

      if(i+5 < n) {
        count = 0;
        for (int k = 0; k < 6;k++){
          if(dp[i+k][j]){
            count++;
          }
          if(count >=4){
            ans = true;
            break;
          }
        }
      }

      if(j+5 < n) {
        count = 0;
        for (int k = 0; k < 6;k++){
          if(dp[i][j+k]){
            count++;
          }
          if(count >=4){
            ans = true;
            break;
          }
        }
      }

      if(i+5 < n && j+5 < n) {
        count = 0;
        for (int k = 0; k < 6;k++){
          if(dp[i+k][j+k]){
            count++;
          }
          if(count >=4){
            ans = true;
            break;
          }
        }
      }

      if(i-5 >=0 && j+5 < n) {
        count = 0;
        for (int k = 0; k < 6;k++){
          if(dp[i-k][j+k]){
            count++;
          }
          if(count >=4){
            ans = true;
            break;
          }
        }
      }
    }
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
