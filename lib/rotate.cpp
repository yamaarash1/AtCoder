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

//右回転
//配列:p, n(i):行数, m(j):列数
map<int, map<int, char>> rotate90(map<int, map<int,char>> p, int N, int M){
  map<int, map<int,char>> q;
    for(int n = 0;n < M; n++){
      for(int m = 0;m < N; m++){
        q[n][m] = p[N - 1 - m][n];
      }
    }
  return q;
}

map<int, map<int, char>> rotate180(map<int, map<int,char>> p, int N, int M){
  map<int, map<int,char>> q;
    for(int n = 0;n < N; n++){
      for(int m = 0;m < M; m++){
        q[n][m] = p[N - 1 - n][M - 1 - m];
      }
    }
  return q;
}

map<int, map<int, char>> rotate270(map<int, map<int,char>> p, int N, int M){
  map<int, map<int,char>> q;
    for(int n = 0;n < M; n++){
      for(int m = 0;m < N; m++){
        q[n][m] = p[m][M - 1 - n];
      }
    }
  return q;
}