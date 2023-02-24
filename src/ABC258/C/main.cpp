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
  ll n, q;
  string s;
  cin >> n >> q >> s;
  ll rotate = 0;
  while(q--){
    ll t, x;
    cin >> t >> x;
    if (t == 1)
    {
      rotate += x;
    } else {
      if((x - 1 - rotate) % n >= 0) 
        cout << s[(x - 1 - rotate) % n] << endl;
      else
        cout << s[(x - 1 - rotate) % n + n] << endl;
    }
  }
  return 0;
}
