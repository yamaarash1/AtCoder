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
  int n, k;
  cin >> n >> k;
  int a[n];
  set<int> a_s;
  rep(i, n) cin >> a[i];
  rep(i, n) a_s.insert(a[i]);
  int order = 0;
  int ans = 0;
  for (auto x : a_s) {
    if(order == k) {
      break;
    }
    if(order == x) {
      ans++;
      order++;
    } else {
      break;
    }
  }
  cout << ans << endl;

  return 0;
}
