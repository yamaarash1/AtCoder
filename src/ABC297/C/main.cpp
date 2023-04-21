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
  int h, w;
  cin >> h >> w;
  string s[h];
  for (int i = 0; i < h;i++){
    cin >> s[i];
  }
  for (int i = 0; i < h;i++){
    for (int j = 0; j < w - 1;j++){
      if(s[i][j] == 'T' && s[i][j + 1] == 'T'){
        s[i][j] = 'P';
        s[i][j + 1] = 'C';
      }
    }
  }
  for (int i = 0; i < h;i++){
    cout << s[i] << endl;
  }
  return 0;
}
