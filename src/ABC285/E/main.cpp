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
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  //n日目にn回おやすみをとった時の最大値
  int dp[n][n];
  dp[0][0] = 
  dp[0][1] = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n;j++){

    }
  }
    return 0;
}
