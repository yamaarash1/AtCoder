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
  for (int i = 0; i < (1<<ah); i++){
    for (int j = 0; j < (1<<aw); j++){
      vector<int> hs, ws;
      //bit全探索で行と列の残っている行と列番号をpush
      for (int k = 0; k < ah; k++){
        if((i & (1<<k)) == 0) {
          hs.push_back(k);
        }
      }
      for (int k = 0; k < aw; k++){
        if((j & (1<<k)) == 0) {
          ws.push_back(k);
        }
      }
      //長さが異なる場合は絶対違うので次へ
      if(hs.size() != bh || ws.size() != bw)
        continue;

      bool ok = true;
      for (int x = 0; x < bh; x++){
        for (int y = 0; y < bw; y++){
          if(a[hs[x]][ws[y]] != b[x][y]) {
            ok = false;
            break;
          }
        }
      }
      if(ok) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
