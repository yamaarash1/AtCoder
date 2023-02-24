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
  ll n, t;
  cin >> n >> t;
  ll a[n];
  ll sum = 0;
  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }
  ll rp = t / sum;
  //cout << rp << endl;
  rp = t - rp * sum;
  //cout << rp << endl;
  for (ll i = 0; i < n; i++)
  {
    if(rp < a[i]) {
      cout << i + 1 << " ";
      cout << rp << endl;
      return 0;
    }
    rp -= a[i];
  }
  return 0;
}
