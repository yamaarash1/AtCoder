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

int main() {
  ll n;
  cin >> n;
  ll a[n+1];
  for (ll i = 1; i <= n;i++){
    cin >> a[i];
  }
  ll q;
  cin >> q;
  while (q)
  {
    ll x;
    cin >> x;
    if(x == 1){
      ll xq;
      cin >> xq;
      for (ll i = 1; i <= n;i++){
        a[i] = xq;
      }
    }
    else if(x == 2) {
      ll iq, xq;
      cin >> iq >> xq;
      a[iq] += xq;
    }
    else
    {
      ll iq;
      cin >> iq;
      cout << a[iq] << endl;
    }
    q--;
  }
  return 0;
}
