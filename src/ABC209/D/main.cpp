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
map<int, bool> passed;
map<int, vector<int>> m;
map<int, bool> is_even;

void dfs(int x, bool even) {
  passed[x] = true;
  is_even[x] = even;
  for (int y : m[x])
  {
    if(passed[y]) continue;
    dfs(y, !even);
  }
}

int main() {
  int n, q;
  cin >> n >> q;
  for (int i = 0; i < n - 1;i++){
    int a, b;
    cin >> a >> b;
    m[a].push_back(b);
    m[b].push_back(a);
  }
  dfs(1, true);
  while (q--)
  {
    int c, d;
    cin >> c >> d;
    if(is_even[c] == is_even[d]) cout << "Town" << endl;
    else cout << "Road" << endl;
  }
  return 0;
}
