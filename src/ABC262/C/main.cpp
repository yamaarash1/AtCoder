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

ll nCm(ll n, ll m){
  ll ans = 1;
  for (ll i = 0; i < m; i++)
  {
    ans *= n - i;
  }
  for (ll i = m; i > 1; i--)
  {
    ans /= i;
  }
  return ans;
}

int main() {
  ll n;
  cin >> n;
  ll a[n+1];
  for (ll i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  //a[i] = iの時、a[a[i]] = iの時がok
  ll same = 0;
  ll inv = 0;
  for (ll i = 1; i <= n;i++)
  {
    if(a[i] == i)
      same++;
  }
  bool change[n + 1];
  for (ll i = 1; i <= n; i++)
  {
    change[i] = false;
  }
  for (ll i = 1; i <= n; i++)
  {
    if (a[a[i]] == i && a[i] != i && !change[i])
    {
      //cout << i << endl;
      inv++;
      change[i] = true;
      change[a[i]] = true;
    }
  }
  //cout << same << " " << inv << endl;
  ll ans = nCm(same, 2) + inv;
  cout << ans << endl;
  return 0;
}
