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
ll h, w;
ll a[100][100];
ll ans = 0;
void dfs(ll x, ll y, map<ll, ll> mp)
{
  if(mp[a[x][y]] != 0) {
    return;
  }
  mp[a[x][y]]++;
  if (x == h - 1 && y == w - 1) {
    ans++;
    return;
  }
  if(x + 1 <= h - 1) {
    dfs(x + 1, y, mp);
  }
  if (y + 1 <= w - 1) {
    dfs(x, y + 1, mp);
  }
  return;
}
int main()
{
  cin >> h >> w;
  map<ll, ll> mp;
  for (ll i = 0; i < h; i++)
  {
    for (ll j = 0; j < w;j++){
      cin >> a[i][j];
    }
  }
  dfs(0, 0, mp);
  cout << ans << endl;
  return 0;
}
