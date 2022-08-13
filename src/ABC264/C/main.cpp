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

int dfs(int s, int e) {

}

int main() {
  int ah, aw;
  cin >> ah >> aw;
  int a[ah][aw];
  for (int i = 0; i < ah;i++){
    for (int j = 0; j < aw;j++){
      cin >> a[i][j];
    }
  }
  int bh, bw;
  cin >> bh >> bw;
  int b[bh][bw];
  for (int i = 0; i < bh;i++){
    for (int j = 0; j < bw;j++){
      cin >> b[i][j];
    }
  }
  int c[100][100];
  c = a - b;

  //スタート地点を設定
  int sh, sw;
  bool ok = false;
  for (int i = 0; i < ah; i++) {
    for (int j = 0; j < aw;j++){
      if(a[i][j] == b[0][0]) {
        sh = i;
        sw = j;
        ok = true;
        break;
      }
    }
    if(ok){
      break;
    }
  }

  return 0;
}
