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
  int s[n], t[n];
  for (int i = 0; i < n;i++){
    cin >> s[i];
  }
  for (int i = 0; i < n;i++){
    cin >> t[i];
  }
  int dp[n];
  for (int i = 0; i < n;i++){
    dp[i] = t[i];
  }
    for (int i = 0; i < n * 2; i++)
    {
      dp[(i + 1) % n] = min(dp[(i + 1) % n], dp[i % n] + s[i % n]);
    }
  for (int i = 0; i < n;i++){
    cout << dp[i] << endl;
  }
    return 0;
}
