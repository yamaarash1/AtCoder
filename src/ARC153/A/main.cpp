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
  int ans = 100000 + (n - 1);
  string s = to_string(ans);
  cout << s[0] << s[0] << s[1] << s[2] << s[3] << s[3] << s[4] << s[5] << s[4] << endl;

  return 0;
}
