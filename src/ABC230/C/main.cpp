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
  ll n, a, b, p, q, r, s;
  cin >> n >> a >> b >> p >> q >> r >> s;
  pair<ll, ll> st;
  ll x, y;

  for (ll i = 0; i < q - p + 1; i++) {
    for (ll j = 0; j < s - r + 1; j++) {
      if(i > a){
        x = a + (i - a);
      }else{
        x = a + (a - i);
      }
      if(j > b){
        y = b + (j - b);
      }else{
        y = b + (b - j);
      }
      if(i == x && j == y){
        cout << "#";
      }else{
        cout << ".";
      }
    }
    cout << endl;
  }
  return 0;
}
