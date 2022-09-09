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
  ll n, m;
  cin >> n >> m;
  ll a[n];
  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  ll sum[n+1];
  sum[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    sum[i] = sum[i-1] + a[i-1];
  }
  ll b[n - m + 1];
  b[0] = 0;
  for (ll i = 0; i < m;i++){
    b[0] += a[i] * (i+1);
  }
  for (ll i = 1; i < n - m + 1; i++)
  {
    b[i] = b[i-1] - (sum[i + m - 1] - sum[i - 1]) + m * a[m + i-1];
  }
  //for (ll i = 0; i < n - m + 1; i++)
  //{
  //  cout << i << ": " << b[i] << endl;
  //}
  ll ans =  -1000000000000000000ll;
  for (ll i = 0; i < n - m + 1; i++)
  {
    ans = max(ans, b[i]);
  }
  cout << ans << endl;
  return 0;
}
