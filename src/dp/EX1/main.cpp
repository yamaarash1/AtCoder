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
  //nまでのサイコロを振った時の総和の出る回数を表示するプログラム（DPを使う）
  int n;
  cin >> n;
  int m = n * 6; //サイコロの数のmaxの値
  int dp[n + 1][m + 1]; //サイコロn個の時、合計値がmになる個数

  for (int i = 0; i <= n; i++){
    for (int j = 0; j <= m; j++){
      dp[i][j] = 0;
    }
  }

  for (int i = 1; i <= 6; i++){
    dp[1][i] = 1;
  }

  for (int i = 2; i <= n;i++){
    for (int j = 1; j <= m; j++){
      if(i * 6 < j){
        break;
      }
      for (int k = 1; k <= 6; k++){
        if(j-k >= 1){
          dp[i][j] += dp[i - 1][j - k];
        }
      }
    }
  }

  cout << "※0回の場合は表示しない" << endl;
  for (int i = 1; i <= n;i++){
    cout << i << "個の時：" << endl;
    for (int j = 1; j <= m; j++)
    {
      if(i * 6 >= j){
        if(j >= i){
          cout << "「" << j << "」のでる回数： " << dp[i][j] << endl;
        }
      }
    }
  }
  return 0;
}
