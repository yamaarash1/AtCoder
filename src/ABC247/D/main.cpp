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
  ll q;
  cin >> q;
  queue<pair<ll, ll>> que;
  for (ll i = 0; i < q;i++){
    ll num, x, c;
    cin >> num;
    if (num == 1)
    {
      cin >> x >> c;
      que.push({x, c});
    }
    else
    {
      cin >> c;
      ll ans = 0;
      pair<ll, ll> f = que.front();
      if (f.second > c)
      {
        ans = f.first * c;
        que.front() = {f.first, f.second - c};
      }
      else
      {
        while (!que.empty()) {
          f = que.front();
          if(f.second > c){
            ans += f.first * c;
            que.front() = {f.first, f.second - c};
            break;
          } else {
            ans += f.first * f.second;
            c -= f.second;
            que.pop();
          }
        }
      }
      cout << ans << endl;
    }
  }
    return 0; 
}
