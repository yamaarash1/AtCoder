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
  ll n,m;
  cin >> n;
  if (n == 1)
  {
    ll one_ans;
    cin >> one_ans;
    cout << one_ans << endl;
    return 0;
  }
  ll A[2*n-1][2*n];
  for (ll i = 0; i < 2*n-1; i++){
    for (ll j = 0; j < 2*n; j++){
      A[i][j] = -1;
    }
  }
  for (ll i = 0; i < 2*n-1; i++){
    for (ll j = i+1; j < 2*n; j++){
      cin >> A[i][j];
    }
  }
  ll ans = 0;
  for (ll i = 0; i < 2 * n - 1; i++)
  {
    for (ll j = i + 1; j < 2 * n; j++)
    {
      for (ll k = 0; k < 2 * n - 1; k++)
      {
        for (ll l = k + 1; l < 2 * n; l++)
        {
          if (i == k || j == l)
            continue;
          if(i == l || j == k)
            continue;
          ll a = A[i][j];
          ll b = A[k][l];
          ll tmp = a ^ b;
          if(tmp > ans){
            ans = tmp;
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
