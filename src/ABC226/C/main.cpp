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
ll n;
ll t[200009], k[200009];
vector<vector<ll>> a(200009);
ll ans = 0;
vector<bool> visited(200009, false);

void dfs(ll m){
  //cout << m << ": " << ans << endl;
  if (visited[m]) {
    return;
  }
  ans += t[m];
  visited[m] = true;
  if (k[m] == 0) {
    return;
  }
  for (ll i = 0; i < k[m];i++){
    dfs(a[m][i]);
  }
  return;
}

int main()
{
  cin >> n;
  for (ll i = 0; i < n;i++){
    cin >> t[i] >> k[i];
    for (ll j = 0; j < k[i];j++){
      ll x;
      cin >> x;
      a[i].push_back(x - 1);
    }
  }
  dfs(n - 1);
  cout << ans << endl;
  return 0;
}
