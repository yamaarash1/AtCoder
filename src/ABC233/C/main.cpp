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
ll n, x;
ll ans = 0;
vector<vector<ll>> a;
void dfs(ll depth, ll res)
{
  if (depth == n)
  {
    if(res==x)
    ans = ans + 1;
    return;
  }
  for (ll c:a[depth])
  {
    if(res>x/c)continue;
    dfs(depth + 1, res * c);
  }
}

int main() {
  cin >> n >> x;
  a.resize(n);
  for (ll i = 0; i < n; i++)
  {
    ll l;
    cin >> l;
    a[i].resize(l);
    for (ll j = 0; j < l; j++)
    {
      cin >> a[i][j];
    }
  }
  dfs(0, 1);
  cout << ans << endl;
  return 0;
}
