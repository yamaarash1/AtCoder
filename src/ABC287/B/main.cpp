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
  cin >> n >> m;
  string s[n];
  string t[m];
  for (int i = 0; i < n;i++){
    cin >> s[i];
  }
  for (int i = 0; i < m;i++){
    cin >> t[i];
  }
  int ans = 0;
  for (int i = 0; i < n;i++){
    for (int j = 0; j < m;j++){
      string tmp = s[i].substr(3, 3);
      if (tmp == t[j])
      {
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
