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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

ll v(pair<ll,ll> p, pair<ll, ll> q){
  return p.first * q.second - p.second * q.first;
}

int main() {
  pair<ll, ll> a, b, c, d;
  cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second >> d.first >> d.second;
  ll ABC = v(a, c);
  ll BCD = v(b, d);
  ll CDA = v(c, a);
  ll DAB = v(d, b);
  cout << ABC << endl;
  cout << BCD << endl;
  cout << CDA << endl;
  cout << DAB << endl;

  return 0;
}
