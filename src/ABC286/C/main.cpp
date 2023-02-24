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
  ll n, a, b;
  string s;
  cin >> n >> a >> b >> s;
  ll ans = LL_MAX;
  string s1 = s;
  for (ll i = 0; i < n; i++)
  {
    ll yen = a * i;
    for (ll j = 0; j < n / 2; j++)
    {
      if(s[j] == s[s.length() - 1 - j])
        continue;
      yen += b;
    }
    ans = min(ans, yen);
    s = s.substr(1, s.length()-1) + s.substr(0, 1);
    //rotate(s1.begin(), s1.begin() + 1, s1.end());
    //cout << s << " " << s1 << endl;
  }
  cout << ans << endl;
  return 0;
}
