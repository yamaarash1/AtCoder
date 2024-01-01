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
#include <stack>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repab(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define reprab(i, a, b) for (int i = (int)(a); i >= (int)(b); i--)
#define repabc(i, a, b, c) for (int i = (int)(a); int (b) < (int)(c); i++)
#define all(a)  (a).begin(),(a).end()
#define allr(a)  (a).rbegin(),(a).rend()
#define in(x) cin >> x
#define in2(x, y) cin >> x >> y
#define in3(x, y, z) cin >> x >> y >> z
#define outl(x) cout << x << endl
#define outl2(x, y) cout << x << " " << y << endl
#define outl3(x, y, z) cout << x << " " << y << " " << z << endl
#define out(x) cout << x
#define out2(x, y) cout << x << " " << y
#define out3(x, y, z) cout << x << " " << y << " " << z
#define YesNo(flag) cout << (flag ? "Yes" : "No") << endl
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
typedef long long ll;

int main() { 
  string p[3][4];
  rep(i,3){
    rep(j,4){
      in(p[i][j]);
    }
  }
  bool ok = true;
  char q[3][4][4][4]; //0: 0度 1: 90度 2: 180度 3: 270度
  char check[4][4];
  for(int a = 0;a<3;a++){
    for(int i = 0;i<4;i++){
      for(int j = 0;j<4;j++){
        q[a][0][i][j] = p[a][i][j];
      }
    }
    for(int i = 0;i<4;i++){
      for(int j = 0;j<4;j++){
        q[a][1][i][j] = p[a][3-j][i];
      }
    }
    for(int i = 0;i<4;i++){
      for(int j = 0;j<4;j++){
        q[a][2][i][j] = p[a][3-i][3-j];
      }
    }
    for(int i = 0;i<4;i++){
      for(int j = 0;j<4;j++){
        q[a][3][i][j] = p[a][j][3-i];
      }
    }
  }

  char r[3][4][4][4];
  for(int a = 0;a<3;a++){
    for(int i = 0;i<4;i++){
      for(int j = 0;j<4;j++){
        for(int x = 0;x<4;x++){
          for(int y = 0;y<4;y++){
            int minX = 0;
            int maxX = 0;
            int minY = 0;
            int maxY = 0;
          }
        }
        q[a][0][i][j] = p[a][i][j];
      }
    }
    for(int i = 0;i<4;i++){
      for(int j = 0;j<4;j++){
        q[a][1][i][j] = p[a][3-j][i];
      }
    }
    for(int i = 0;i<4;i++){
      for(int j = 0;j<4;j++){
        q[a][2][i][j] = p[a][3-i][3-j];
      }
    }
    for(int i = 0;i<4;i++){
      for(int j = 0;j<4;j++){
        q[a][3][i][j] = p[a][j][3-i];
      }
    }
  }

  for(int i = 0;i<4;i++){
    for(int j = 0;j<4;j++){
      if(check[i][j] == '#' && q1[i][j] == '#') {
        ok = false;
        break;
      } else if(q1[i][j] == '#') {
        check[i][j] = q1[i][j];
      }
    }
  }
  if(ok) {
    for(int i = 0;i<4;i++){
      for(int j = 0;j<4;j++){
        if(check[i][j] != '#'){
          ok = false;
          break;
        }
      }
      if(!ok) {
        break;
      }
    }
  }
  for(int i = 0;i<4;i++){
    for(int j = 0;j<4;j++){
      check[i][j] = '.';
    }
  }
  YesNo(ok);
  return 0; 
}
