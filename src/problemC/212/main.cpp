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
  int a[n], b[m];
  vector<pair<int,string>> c;
  for (int i = 0; i < n;i++){
    cin >> a[i];
    c.push_back({a[i], "a"});
  }
  for (int i = 0; i < m;i++){
    cin >> b[i];
    c.push_back({b[i], "b"});
  }
  sort(c.begin(), c.end());
  int ans = I_MAX;
  for (int i = 0; i < c.size() - 1; i++)
  {
    if(c[i].second != c[i+1].second) {
      int num = abs(c[i].first - c[i+1].first);
      ans = min(ans, num);
    }
  }
  cout << ans << endl;
  return 0;
}
