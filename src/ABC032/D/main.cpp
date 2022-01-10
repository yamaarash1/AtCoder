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
ll N, M;
ll v[209], w[209];

ll dfs(ll i, ll sum){
  ll res;
  if(i == N){
    res = 0;
  }
}
int main() { 
  cin >> N >> M;
  for (ll i = 0; i < N;i++){
    cin >> v[i] >> w[i];
  }
  ll res = dfs(0, 0);
  cout << res << endl;
  return 0;
}


//ll dfs(ll i, ll sum){
//  ll res;
//  if (i == N){
//    res = 0;
//  }else if(sum + w[i] <= M){
//    res = max(dfs(i + 1, sum + w[i]) + v[i], dfs(i + 1, sum));
//  }else{
//    res = dfs(i + 1, sum);
//  }
//  return res;
//}