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
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
map<ll, ll> memo;
ll n;
ll f(ll n) {
  if(n == 0) {
    return 1;
  }
  if(memo[n]) {
    return memo[n];
  }
  return memo[n] = f(n / 2) + f(n / 3);
}

int main() {
  cin >> n;
  ll a = f(n);
  memo[0] = 1;
  cout << memo[n] << endl;
  return 0;
}
