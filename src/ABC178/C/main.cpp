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
#define mod 1000000007

ll powmod(ll x, ll y){
  ll res = 1;
  for (ll i = 0; i < y; i++)
  {
    res = res * x % mod;
  }
  return res;
}
int main() {
  ll n;
  cin >> n;
  ll ans = powmod(10, n) - powmod(9, n) - powmod(9, n) + powmod(8, n);
  ans = ans % mod;
  ans = (ans+mod) % mod;
  cout << ans << endl;
  return 0;
}
