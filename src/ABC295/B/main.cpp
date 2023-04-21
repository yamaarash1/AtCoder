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
  int r, c;
  cin >> r >> c;
  char b[r][c];
  for (int i = 0; i < r;i++){
    for (int j = 0; j < c;j++){
      cin >> b[i][j];
    }
  }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(b[i][j] == '.') {
        continue;
      }
      if(b[i][j] == '#') {
        continue;
      }
      int atk = b[i][j] - '0';
      for (int k = 0; k < r;k++){
        for (int l = 0; l < c;l++){
          if(abs(i-k)+abs(j-l) <= atk){
            if(b[k][l] == '#'){
              b[k][l] = '.';
            }
          }
        }
      }
      b[i][j] = '.';
    }
  }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout << b[i][j];
    }
    cout << endl;
  }
  return 0;
}
