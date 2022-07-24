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
int n;
vector<bool> seen;
bool ok;
int start, goal;
vector<vector<int>> G(n);

bool dfs(int v){
  seen[v] = true;
  if(v == goal) {
    return true;
  }
  for (auto u : G[v]) { 
    if (seen[u]) continue;
    if(dfs(u))
      return true;
  }
  return false;
}

int main() {
  long double sx, sy, tx, ty;
  cin >> n >> sx >> sy >> tx >> ty;
  long double x[n], y[n], r[n];
  for (int i = 0; i < n; i++){
    cin >> x[i] >> y[i] >> r[i];
  }

  //どの円がどの円とつながっているかを確認
  for (int i = 0; i < n; i++){
    G[i].push_back(i);
  }

  for (int i = 0; i < n; i++){
    for (int j = i+1; j < n; j++){
      if(i == j)
        continue;
      long double dis = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
      if(r[i] + r[j] < dis || dis < abs(r[i] - r[j]))
        continue;
      G[i].push_back(j);
      G[j].push_back(i);
    }
  }

  //sとtがどの円に乗っかっているかを確認
  int s_pos;
  int t_pos;
  for (int i = 0; i < n;i++){
    if((x[i] - sx) * (x[i] - sx) + (y[i] - sy) * (y[i] - sy) == r[i] * r[i]){
      s_pos = i;
    }
    if((x[i] - tx) * (x[i] - tx) + (y[i] - ty) * (y[i] - ty) == r[i] * r[i]){
      t_pos = i;
    }
  }

  for (int i = 0; i < n;i++){
    seen.push_back(false);
  }

  //グラフ理論でstartからgoalまで探索
  start = s_pos;
  goal = t_pos;
  if (dfs(start))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}
