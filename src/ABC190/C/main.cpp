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
  int a[m], b[m];
  for (int i = 0; i < m; i++){
    cin >> a[i] >> b[i];
  }
  int k;
  cin >> k;
  int c[k], d[k];
  int ans = 0;
  for (int i = 0; i < k; i++)
  {
    cin >> c[i] >> d[i];
  }
  for (int bit = 0; bit < (1 << k); bit++) {
    vector<bool> flag(n);
    int tmp = 0;
    for (int i = 0; i < k; i++)
    {
      if(bit & (1 << i)) {
        flag[c[i]] = true;
      } else { 
        flag[d[i]] = true;
      }
    }
    for (int i = 0; i < m; i++){
      if(flag[a[i]] && flag[b[i]]) {
        tmp++;
      }
    }
    ans = max(tmp, ans);
  }
  cout << ans << endl;
  return 0;
}
