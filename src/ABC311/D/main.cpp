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
#define outl2(x, y) cout << x << y << endl
#define outl3(x, y, z) cout << x << y << z << endl
#define out(x) cout << x
#define out2(x, y) cout << x << y
#define out3(x, y, z) cout << x << y << z
#define YesNo(flag) cout << (flag ? "Yes" : "No") << endl
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
typedef long long ll;
int n,m;
string s[209];
map<int, map<int,bool>> passed;
map<int, map<int,bool>> stopped;
vector<pair<int,int>> dict;

void dfs(int x, int y) {
  stopped[x][y] = true;
  for(auto d : dict) {
    int dx = x + d.first;
    int dy = y + d.second;
    while(s[dx][dy] != '#') {
      passed[dx][dy] = true;
      dx += d.first;
      dy += d.second;
    }
    if(!stopped[dx - d.first][dy - d.second]) {
      dfs(dx - d.first, dy - d.second);
    }
  }
}

int main() { 
  in2(n,m);
  rep(i,n) {
    in(s[i]);
  }
  dict.push_back(make_pair(1,0));
  dict.push_back(make_pair(-1,0));
  dict.push_back(make_pair(0,1));
  dict.push_back(make_pair(0,-1));
  passed[1][1] = true;
  dfs(1,1);
  //rep(i, n) {
  //  rep(j, m) {
  //    if(passed[i][j]) cout << 1 << " ";
  //    else if(s[i][j] == '#') cout << "#" << " ";
  //    else cout << 0 << " ";
  //  }
  //  cout <<endl;
  //}
  int ans = 0;
  rep(i, n) {
    rep(j, m) {
      if(passed[i][j]) ans++;
    }
  }
  outl(ans);
  return 0; 
}
