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
  ll t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    ll n;
    cin >> n;
    ll p, q;//p^2*q
    for (ll j = 2; j * j * j <= n; j++)
    {
      if(n%j==0){
        ll k = n / j;
        if(k%j==0){
          p = j;
          q = k / j;
          break;
        } else {
          p = sqrt(k);
          q = j;
        }
      }
    }
    cout << p << " " << q << endl;
  }
  return 0;
}
