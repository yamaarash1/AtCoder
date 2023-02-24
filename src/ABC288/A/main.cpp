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
  for (ll i = 0; i < n;i++){
    ll a, b;
    cin >> a >> b;
    ll ans = a+b;
    cout << ans << endl;
  }
    return 0;
}
