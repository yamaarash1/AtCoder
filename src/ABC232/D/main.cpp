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

int main() {
  int h, w;
  string C;
  cin >> h >> w;
  string c[h+2][w+2];
  for (int i = 0; i <= h+1;i++){
    for (int j = 0; j <= w+1;j++){
      c[i][j] = "#";
    }
  }
  for (int i = 1; i <= h;i++){
    cin >> C;
    for (int j = 1; j <= w; j++)
    {
      c[i][j] = C[j-1];
    }
  }
  int res[h+2][w+2];
  for (int i = 0; i <= h+1;i++){
    for (int j = 0; j <= w+1;j++){
      res[i][j] = 0;
    }
  }
  for (int i = h; i >= 1; i--)
  {
    for (int j = w; j >= 1;j--){
        if (c[i][j] == "#") continue;
        res[i][j] = max(res[i + 1][j], res[i][j + 1]) + 1;
    }
  }
  cout << res[1][1] << endl;
  return 0;
}
