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

int main() { 
  int h,w;
  cin >> h >> w;
  int a[h][w];
  for (int i = 0; i < h;i++){
    for (int j = 0; j < w;j++){
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < h; i++){
    for (int j = 0; j < w; j++){
      if(a[i][j] == 0) {
        cout << ".";
        continue;
      }
      char s = 'A' + (a[i][j] - 1);
      cout << s;
    }
    cout << endl;
  }
  return 0;
}