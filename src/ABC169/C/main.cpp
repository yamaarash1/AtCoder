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

int main() {
  ll A, B1, B2;
  scanf("%lld %lld.%lld", &A, &B1, &B2);
  ll ans = A * (B1 * 100 + B2) / 100;
  cout << ans << endl;
  return 0;
}
