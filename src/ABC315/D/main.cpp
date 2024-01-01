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
  int h,w;
  in2(h,w);
  string c[h];
  rep(i, h) {
    in(c[i]);
  }
  map<int,map<int,vector<char>>> dp; //0が行、1が列
  map<char, int> cnt;
  rep(i,h) {
    rep(j,w) {
      cnt[c[i][j]]++;
    }
    for(auto x : cnt) {
      //cout << i << ": ";
      //outl2(x.first, x.second);
      dp[0][x.second].push_back(x.first);
    }
    cnt.clear();
  }
  rep(j,w) {
    rep(i,h) {
      cnt[c[i][j]]++;
    }
    for(auto x : cnt) {
      dp[1][x.second].push_back(x.first);
    }
    cnt.clear();
  }
  int ans = h * w;
  while(1) {
    //cout << h << " " << w << endl;
    if(w<=0||h<=0) {
      break;
    }
    int del_h = 0;
    int del_w = 0;
    if(w == 1 && h == 1) {
      break;
    }
    if(dp[0][w].size() <= 0 && dp[1][h].size() <= 0) {
      break;
    }
    if(w != 1) {
      if(dp[0][w].size() > 0) {
        del_h = dp[0][w].size();
        ans -= dp[0][w].size() * w;
      }
    }
    if(h != 1) {
      if(dp[1][h].size() > 0) {
        del_w = dp[1][h].size();
        ans -= dp[1][h].size() * h;
      }
    }
    cout << w << " " <<  dp[1][h].size() <<endl;
    h -= del_h;
    w -= del_w;
  }
  outl(ans);
  return 0; 
}
