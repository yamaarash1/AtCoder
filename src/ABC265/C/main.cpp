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
  cin >> h >> w;
  string g[h];
  for (int i = 0; i < h;i++){
    cin >> g[i];
  }
  int step = 0;
  int x = 0;
  int y = 0;
  while(true){
    if(step >= 500 * 500) {
      cout << -1 << endl;
      return 0;
    }
    if(g[x][y] == 'U') {
      x = x - 1;
      y = y;
      if(x < 0) {
        x = x + 1;
        break;
      }
    }
    else if (g[x][y] == 'D') {
      x = x + 1;
      y = y;
      if(x > h - 1) {
        x = x - 1;
        break;
      }
    }
    else if (g[x][y] == 'L') {
      x = x;
      y = y - 1;
      if(y < 0) {
        y = y + 1;
        break;
      }
    }
    else if (g[x][y] == 'R') {
      x = x;
      y = y + 1;
      if(y > w - 1) {
        y = y - 1;
        break;
      }
    }
    step++;
  }
  cout << x+1 << " " << y+1 << endl;
  return 0;
}
