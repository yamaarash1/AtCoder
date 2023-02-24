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
  int n, k, d;
  cin >> n >> k >> d;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int dp[n][k+1]; //i個目までみて、j個まで採用した時の最大値
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < k+1; j++) {
      dp[i][j] = -1;
    }
  }
  for(int i = 0; i < n; i++) {
    dp[i][1] = a[i] % d ? a[i] % d : -1;
  }
  for(int i = 0; i < n; i++) {
    for(int j = 1; j < k+1; j++) {
      if(i+1 > j)
        continue;
      dp[i][j] = max(dp[i][j-1], dp[i][j-i-1] + a[i] % d ? a[i] % d : -1);
    }
  }
  return 0;
}
