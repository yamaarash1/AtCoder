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
#define mod 998244353 
#define mod2 499122177

ll calc(ll first, ll end, ll d) {
  if(d == 1){
    return 45;
  }
  ll x = (end - first + 1);
  x %= mod;
  x *= (x + 1);
  x %= mod;
  x *= mod2;
  x %= mod;
  return x;
}

int main() {
  ll n;
  cin >> n;
  ll p10 = 10;
  ll sum = 0;
  if(n<10){
    for (int i = 0; i <= n;i++){
      sum += i;
    }
    cout << sum << endl;
    return 0;
  }
  for (ll i = 1; i <= 18; i++)
  {
    ll end = min(n, p10 - 1);
    sum += calc(p10/10, end, i);
    sum %= mod;
    if (p10 > n){
      break;
    }
    p10 *= 10;
  }
  cout << sum << endl;
  return 0;
}
