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
typedef long long ll;
int n;
ll sx, sy, tx, ty;
ll x[3005], y[3005], r[3005];
vector<int> G[3005];
int S, T;
bool used[3005];
bool dfs(int v)
{
  used[v] = true;
  if(v == T) return true;
  for(auto u : G[v]){
    if(used[u]) continue;
    if(dfs(u)) return true;
  }
  return false;
}
int main(void)
{
  cin >> n;
  cin >> sx >> sy >> tx >> ty;
  for(int i = 0; i < n; i++) cin >> x[i] >> y[i] >> r[i];
  for (int i = 0; i < n; i++){
    for (int j = i+1; j < n; j++){
      if(i == j)
        continue;
      long long int dis = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
      if(r[i] + r[j] < dis || dis < abs(r[i] - r[j]))
        continue;
      G[i].push_back(j);
      G[j].push_back(i);
    }
  }

  //sとtがどの円に乗っかっているかを確認
  for (int i = 0; i < n;i++){
    if((x[i] - sx) * (x[i] - sx) + (y[i] - sy) * (y[i] - sy) == r[i] * r[i]){
      S = i;
    }
    if((x[i] - tx) * (x[i] - tx) + (y[i] - ty) * (y[i] - ty) == r[i] * r[i]){
      T = i;
    }
  }
  if(dfs(S)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}