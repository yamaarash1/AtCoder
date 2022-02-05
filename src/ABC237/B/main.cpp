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
  int A[h][w];
  int B[w][h];
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w;j++){
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < w; i++)
  {
    for (int j = 0; j < h;j++){
      B[i][j] = 0;
    }
  }
  for (int i = 0; i < w; i++)
  {
    for (int j = 0; j < h;j++){
      B[i][j] = A[j][i];
    }
  }
  for (int i = 0; i < w; i++)
  {
    for (int j = 0; j < h;j++){
      cout << B[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
