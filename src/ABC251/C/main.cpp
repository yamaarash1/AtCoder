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

int main() {
  ll n;
  cin >> n;
  map<string, int> m;
  string s[n];
  ll t[n];
  for (ll i = 0; i < n; i++)
  {
    cin >> s[i] >> t[i];
    m[s[i]] = -1;
  }

  ll ans = t[0];
  ll ans_o = 1;
  m[s[0]] = 1;

  for (ll i = 1; i < n; i++)
  {
    if (m[s[i]] == -1)
    {
      m[s[i]] = 1;
      if (ans < t[i])
      {
        ans = t[i];
        ans_o = i + 1;
      }
    }
  }
  cout << ans_o << endl;
  return 0;
}
