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
  string s;
  cin >> s;
  int n = s.size() - 1;
  int ans = 0;
  while (n >= 0)
  {
    if(s[n] == '0' && s[n-1] == '0') {
      n -= 2;
      ans++;
    } else {
      n -= 1;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
