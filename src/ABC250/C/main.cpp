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
  ll n,q,a,b,x;
  cin >> n >> q;
  ll ball[n+1]; //iのボールはball[i]番目
  ll order[n+1];//i番目のボールはorder[i]
  for (ll i = 1; i <= n; i++)
  {
    ball[i] = i;
    order[i] = i;
  }
  for (ll i = 0; i < q; i++){
    cin >> x;
    a = ball[x];
    b = a != n ? a + 1 : a - 1;
    swap(order[a], order[b]);
    swap(ball[order[a]], ball[order[b]]);
  }

  for (ll i = 1; i <= n;i++){
    cout << order[i] << " ";
  }
  cout << endl;
  return 0;
}
