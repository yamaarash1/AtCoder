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
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef long long ll;

ll f(ll t){
  ll ans = t * t + 2 * t + 3;
  return ans;
}
int main() {
  ll t;
  cin >> t;
  ll res = f(f(f(t) + t) + f(f(t)));
  cout << res << endl;
  return 0;
}
