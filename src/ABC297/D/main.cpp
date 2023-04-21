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
  ll a, b;
  cin >> a >> b;
  ll cnt = 0;
  while (1){
    if(a==b) {
      break;
    }
    if(a==0 || b==0){
      break;
    }
    if(a < b){//aの方がでかい
      swap(a, b);
    }
    if(a % b == 0) {
      ll c = a - b;
      cnt += c / b;
      break;
    } else {
      cnt += a / b;
      a = a - (a / b) * b;
    }
    //cout << a << " " << b << endl;
  }
  cout << cnt << endl;
  return 0;
}
