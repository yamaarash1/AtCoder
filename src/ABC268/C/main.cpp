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
  int p[n];
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  vector<int> order(n);
  for (int i = 0; i < n; i++){
      if (p[i] - 1 - i < 0)
      {
        int o = p[i] - 1 - i + n;
        order[o]++;
      } else {
      order[p[i] - 1 - i]++;
    }
    order[p[i]]++;
    if(p[i] + 1 >= n) {
      order[0]++;
    }else {
      order[p[i] + 1]++;
    }
    for (int j = 0; j < n; j++)
  {
    cout << j << ": " << order[j] << endl;
  }
  cout << "--------" << endl;
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = max(ans, order[i]);
  }
  cout << ans << endl;
  return 0;
}
