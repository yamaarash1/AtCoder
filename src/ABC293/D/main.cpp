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
  int n, m;
  pair<int, string> dp[n + 1][2];
  for (int i = 1; i <= n; i++) {
    dp[i][0] = {0, "R"};
    dp[i][1] = {0, "B"};
  }
  while(m--) {
    int a, c;
    string b, d;
    cin >> a >> b >> c >> d;
    int is_red = b == "R" ? 0 : 1;
    dp[a][is_red] = {c, d};
  }
  return 0;
}
