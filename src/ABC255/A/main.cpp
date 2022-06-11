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
  int r, c;
  int a[2][2];
  cin >> r >> c;
  for (int i = 0; i < 2;i++){
    for (int j = 0; j < 2;j++){
      cin >> a[i][j];
    }
  }
  cout<< a[r-1][c-1] << endl;
  return 0;
}
