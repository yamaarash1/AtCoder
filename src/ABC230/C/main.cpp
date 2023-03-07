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
ll n,a,b,p,q,r,s;

bool func (ll x, ll y){
  return y == (x-a) + b;
}

bool m_func(ll x, ll y){
  return y == - (x-a) + b;
}

int main() {
  cin >> n >> a >> b >> p >> q >> r >> s;
  for(ll i = p; i <= q;i++){
    for(ll j = r; j <= s;j++){
      if(func(i,j) || m_func(i,j))cout << "#";
      else cout << ".";
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}