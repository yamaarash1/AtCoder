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
  int n;
  in(n);
  vector<string> s;
  rep(i, n) {
    string tmp;
    in(tmp);
    s.push_back(tmp);
  }
  map<int, int> row; //横
  map<int, int> col; //縦
  rep(i, n){
    rep(j ,n) {
      if(s[i][j] == 'o') {
        row[i]++;
        col[j]++;
      }
    }
  }
  //for(auto x : row) {
  //  outl2(x.first, x.second);
  //}
  //for(auto x : col) {
  //  outl2(x.first, x.second);
  //}
  int ans = 0;
  rep(i, n){
    rep(j ,n) {
      if(s[i][j] == 'x') continue;
      if(row[i] >= 2 && col[j] >= 2) {
        cout << i << " " << j << ": " << row[i] << " " << col[j] << endl;
        ans += (row[i] - 1) * (col[j] - 1);
      }
    }
  }
  outl(ans);
  return 0; 
}
