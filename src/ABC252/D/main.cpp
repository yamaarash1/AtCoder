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
  ll a[n];
  map<ll, ll> same;
  ll ans = 1;
  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
    same[a[i]]++;
  }

  //nC3（全通り）
  ans = nCm(n, 3);

  //2つの組み合わせ（a, a, b)
  ll same_num2 = 0;
  ll tmp2 = 0;
  for (auto x : same)
  {
    if(x.second >= 2){
      same_num2++;
    }
  }
  for (auto x : same)
  {
    if(x.second >= 2){
      tmp2 += nCm(x.second, 2) * (n - x.second);
    }
  }

  // 3つの組み合わせ（a, a, a)
  ll tmp3 = 0;
  for (auto x : same)
  {
    if(x.second >= 3){
      tmp3 += nCm(x.second, 3);
    }
  }

  ans = ans - tmp2 - tmp3;
  cout << ans << endl;
  return 0;
}
