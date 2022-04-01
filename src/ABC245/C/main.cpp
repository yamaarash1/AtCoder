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
  int n, k;
  cin >> n >> k;
  int A[n], B[n];
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  for (int i = 0; i < n;i++){
    cin >> B[i];
  }
  int dp[n][2];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 2; j++){
      dp[i][j] = -1;
    }
  }
  dp[0][0] = 1;
  dp[0][1] = 1;
  for (int i = 1; i < n; i++)
  {
    int aa = abs(A[i] - A[i - 1]);
    int ab = abs(B[i] - A[i - 1]);
    int ba = abs(A[i] - B[i - 1]);
    int bb = abs(B[i] - B[i - 1]);
    if (dp[i-1][0] == 1){
      if (aa <= k){
        dp[i][0] = 1;
      }
      if (ab <= k){
        dp[i][1] = 1;
      }
    }
    if (dp[i-1][1] == 1){
      if (ba <= k){
        dp[i][0] = 1;
      }
      if (bb <= k){
        dp[i][1] = 1;
      }
    }
  }
  if(dp[n-1][0] == 1 || dp[n-1][1] == 1) cout<<"Yes"<<endl;
  else cout << "No" << endl;
  return 0;
}
