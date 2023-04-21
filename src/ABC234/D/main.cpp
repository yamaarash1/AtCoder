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
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  set<int, greater<int>> b;
  for (int i = 0; i < k; i++) {
    b.insert(a[i]);
  }

  for (int i = k - 1; i < n; i++)
  {
    auto it = b.begin();
    cout << "start " << *it << endl;
    advance(it, 5);
    if(i != k - 1) {
      b.insert(a[i]);
    }
    for(auto x : b) {
      cout << x << " ";
    }
    cout << endl;
    cout << *it << endl;
  }
  return 0;
}
