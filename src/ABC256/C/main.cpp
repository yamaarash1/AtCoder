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
  int h[3], w[3];
  int cell[3][3];
  int count = 0;
  cin >> h[0] >> h[1] >> h[2] >> w[0] >> w[1] >> w[2];
  for (int i = 1; i < 30; i++){
    for (int j = 1; j < 30; j++){
      for (int k = 1; k < 30; k++){
        for (int l = 1; l < 30;l++){
          cell[0][0] = i;
          cell[0][1] = j;
          cell[1][0] = k;
          cell[1][1] = l;
          if(i+k >= w[0]) {
            continue;
          }
          if(j+l >= w[1]){
            continue;
          }
          if(i+j >= h[0]){
            continue;
          }
          if(k+l >= h[1]){
            continue;
          }
          cell[0][2] = h[0] - i - j;
          cell[1][2] = h[1] - k - l;
          cell[2][0] = w[0] - i - k;
          cell[2][1] = w[1] - j - l;
          cell[2][2] = h[2] - cell[2][0] - cell[2][1];
          if(cell[2][2] <= 0) {
            continue;
          }
          if (h[2] - cell[2][0] - cell[2][1] != w[2] - cell[0][2] - cell[1][2])
          {
            continue;
          }
          count++;
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}
