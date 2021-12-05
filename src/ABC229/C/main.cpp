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
int N, W;
//int dfs(pair<int, int> a, int we, int v) { 
//  int res;
//  if (W <= we) {
//    res = 0;
//  }else if({
//
//  }
//
//}
int main() {
  cin >> N >> W;
  //vector<tuple<ll, ll, ll>> A;
  pair<ll,ll> A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i].first >> A[i].second;
  }
  sort(A, A+N, greater<pair<ll,ll>>{});
  ll res = 0;
  ll v = W;
  for (int i = 0; i < N; i++) {
    if(v>A[i].second){
      res += A[i].first * A[i].second;
      v = v - A[i].second;
    } else {
      res += A[i].first * v;
      break;
    }
  }
  cout << res << endl;

  return 0;
}
