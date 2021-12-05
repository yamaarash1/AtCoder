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
  int H, W, C, Q;
  cin >> H >> W;
  cin >> C >> Q;
  ll t[Q + 9], n[Q + 9], c[Q + 9], res[C + 9], map_res[H + 9][W + 9];
  for (int i = 0; i < Q; i++){
    cin >> t[i] >> n[i] >> c[i];
  }
  for (ll i = 0; i <= H; i++) {
    for (ll j = 0; j <= W;j++){
      map_res[i][j] = -1;
    }
  }
  for (ll i = 0; i <= C; i++) {
    res[i] = 0;
  }
  for (ll i = Q - 1; i >= 0; i--) {
    if(t[i]==1){
      for (ll j = 1; j <= H+1;j++){
        if(map_res[n[i]][j] == -1){
          map_res[n[i]][j] = c[i];
          res[c[i]]++;
        }
      } 
    }else{
      for (ll j = 1; j <= W+1;j++){
        if(map_res[j][n[i]] == -1){
          map_res[j][n[i]] = c[i];
          res[c[i]]++;
        }
      }     
    }
  }
  for (ll i = 1; i <= C;i++){
    cout << res[i] << " ";
  }
  return 0;
}
