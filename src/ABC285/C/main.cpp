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
  string s;
  cin >> s;
  ll ans = 0;
  vector<ll> v;
  for (ll i = 0; i < s.length(); i++)
  {
    v.push_back(s[i] - '0' - 16);
  }
  reverse(v.begin(), v.end());
  for (ll i = 0; i < v.size(); i++)
  {
    ll tmp = 1;
    for (ll j = 0; j < i; j++)
    {
      tmp = 26 * tmp;
    }
    ans += tmp * v[i];
  }
  cout << ans << endl;
}
