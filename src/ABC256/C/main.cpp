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
  int h1,h2,h3,w1,w2,w3;
  cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
  int ans = 0;
  for (int i = 1; i <= 28; i++){
    for (int j = 1; j <= 28; j++){
      for (int k = 1; k <= 28; k++){
        for (int l = 1; l <= 28; l++){
          int a = i;
          int b = j;
          int d = k;
          int e = l;
          int c = h1 - a - b;
          int f = h2 - d - e;
          int g = w1 - a - d;
          int h = w2 - b - e;
          if(c < 1){
            continue;
          }
          if(f < 1) {
            continue;
          }
          if(g < 1) {
            continue;
          }
          if(h < 1) {
            continue;
          }
          if (- h3 + g + h == - w3 + c + f) {
            if(h3 - g - h >= 1)
              ans++;
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
