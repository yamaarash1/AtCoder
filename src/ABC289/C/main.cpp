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
  vector<set<int>> c(m);
  for (int i = 0; i < m; i++){
    int count;
    cin >> count;
    for (int j = 0; j < count; j++){
      int a;
      cin >> a;
      c[i].insert(a);
    }
  }
  int ans = 0;
  for (int bit = 0; bit < (1 << m); bit++)
  {
    set<int> tmp = {};
    for (int i = 0; i < m; i++)
    {
      set<int> result = {};
      if(bit & (1 << i)) {
        tmp.insert(c[i].begin(), c[i].end());
      }
    }
    if(tmp.size() == n) ans++;
    tmp.clear();
  }
  cout << ans << endl;
  return 0;
}
