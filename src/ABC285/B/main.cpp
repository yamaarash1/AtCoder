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
  string s;
  cin >> n >> s;
  //i個飛ばし
  for (int i = 1; i <= s.length() - 1; i++) {
    int ans = 0;
    for (int k = 0; k + i <= s.length() - 1; k++)
    {
      if(s[k] == s[k + i]) {
        break;
      }
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}
