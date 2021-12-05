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
#define rep(i, n) for (long long i = 0; i < (long long)(n); i++)

int main() {
  long long n, k;
  cin >> n >> k;
  long long a[n+10000], b[n+10000];
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  long long sa = 0;
  rep(i, n) { sa += abs(a[i] - b[i]); }
  long long res = k - sa;
  if (res % 2 == 0 && res >= 0)
    cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
