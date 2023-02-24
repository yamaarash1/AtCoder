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
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
int n;
vector<vector<int>> cell(2001, vector<int>(2001, 0));
vector<vector<bool>> visited(2001, vector<bool>(2001, false));

void dfs(int x, int y) {
  if(cell[x][y] == 0){
    visited[x][y] = true;
    return;
  }
  if (visited[x][y]) return;
  visited[x][y] = true;
  if (x - 1 >= 0) {
    dfs(x - 1, y);
  }
  if (x - 1 >= 0 && y - 1 >= 0)
  {
    dfs(x - 1, y - 1);
  }
  if (y - 1 >= 0) {
    dfs(x, y - 1);
  }
  if(x + 1 <= 2000) {
    dfs(x + 1, y);
  }
  if(y + 1 <= 2000) {
    dfs(x, y + 1);
  }
  if(x + 1 <= 2000 && y + 1 <= 2000){
    dfs(x + 1, y + 1);
  }
  return;
}

int main() {
  cin >> n;
  for (int i = 0; i < n;i++){
    int x, y;
    cin >> x >> y;
    cell[x+1000][y+1000] = 1;
  }
  int ans = 0;
  for (int i = 0; i <= 2000; i++){
    for (int j = 0; j <= 2000;j++){
      if (!visited[i][j] && cell[i][j] == 1)
      {
        ans++;
        dfs(i, j);
      }
    }
  }
  cout << ans << endl;
  return 0;
}
