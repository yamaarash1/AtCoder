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
  set<int> x[n+1];
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    x[a].insert(b);
    x[b].insert(a);
  }
  for (int i = 1; i <= n;i++) {
    cout << x[i].size() << " ";
    for(auto y : x[i]) {
      cout << y << " ";
    }
    cout << endl;
  }
  return 0;
}
