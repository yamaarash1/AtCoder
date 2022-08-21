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
  ll n, p, q, r;
  cin >> n >> p >> q >> r;
  ll a[n];
  set<ll> s;
  ll s_a = 0;
  s.insert(s_a);
  for (ll i = 0; i < n; i++)
  {
    ll a;
    cin >> a;
    s_a += a;
    s.insert(s_a);
  }
  for (auto tar : s){
    if(s.find(tar+p) != s.end() && s.find(tar+p+q) != s.end() && s.find(tar+p+q+r) != s.end() ){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
