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
#include <cassert>
#include <numeric>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef long long ll;

int main() {
  ll n, a, b, c;
  ll x, y, z;
  cin >> n >> a >> b;
  if(a>b){
    swap(a, b);
  }
  c = a * b;
  c = lcm(a,b);
  ll sum = (n * (n + 1)) / 2;
  ll sum_a = a * ( n / a * ( (n / a) + 1 ) / 2 );
  ll sum_b = b * ( n / b * ( (n / b) + 1 ) / 2 );
  ll sum_ab = c * ( n / c * ( (n / c) + 1 ) / 2 );
  ll ans = sum - sum_a - sum_b + sum_ab;
  cout << ans << endl;
  return 0;
}
