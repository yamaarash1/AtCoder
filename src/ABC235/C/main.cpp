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
  ll n, q;
  cin >> n >> q;
  map<int, vector<int>> A;
  for (ll i = 1; i <= n; i++)
  {
    ll a;
    cin >> a;
    A[a].push_back(i);
  }
  for (ll i = 0; i < q;i++){
    ll x, k;
    cin >> x >> k;
    k--;
    if (A[x].size() <= k)
    {
      cout << -1 << endl;
    }
    else
    {
      cout << A[x][k] << endl;
    }
  }
  return 0;
}
