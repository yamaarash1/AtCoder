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
#include <stack>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repab(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define reprab(i, a, b) for (ll i = (ll)(a); i >= (ll)(b); i--)
#define repabc(i, a, b, c) for (ll i = (ll)(a); ll (b) < (ll)(c); i++)
#define all(a)  (a).begin(),(a).end()
#define allr(a)  (a).rbegin(),(a).rend()
#define in(x) cin >> x
#define in2(x, y) cin >> x >> y
#define in3(x, y, z) cin >> x >> y >> z
#define outl(x) cout << x << endl
#define outl2(x, y) cout << x << y << endl
#define outl3(x, y, z) cout << x << y << z << endl
#define out(x) cout << x
#define out2(x, y) cout << x << y
#define out3(x, y, z) cout << x << y << z
#define YesNo(flag) cout << (flag ? "Yes" : "No") << endl
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
typedef long long ll;


int main() { 
  ll n;
  in(n);
  vector<ll> a;
  rep(i, n) {
    ll tmp;
    in(tmp);
    a.push_back(tmp);
  }
  sort(all(a));
  ll sum = 0;
  rep(i, n) {
    sum += a[i];
  }
  ll div = sum / n;
  ll rem = sum % n;
  ll ans = 0;
  rep(i, n) {
    if(a[i] - div >= 0) {
      if(i >= (n - rem)) {
        ans += a[i] - (div + 1);
      } else {
        ans += a[i] - div;
      }
    }
  }
  outl(ans);
  return 0; 
}
