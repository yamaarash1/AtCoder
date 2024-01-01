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
  int n,m;
  in2(n,m);
  string s;
  in(s);
  map<int, vector<int>> mp;
  int c[n];
  rep(i, n) {
    int tmp;
    in(tmp);
    mp[tmp].push_back(i);
  }
  char t[n];
  for(auto m: mp) {
    rep(i, m.second.size()) {
      int order = i - 1 < 0 ? m.second.size() - 1 : i - 1;
      t[m.second[i]] = s[m.second[order]];
    }
  }
  rep(i, n) {
    out(t[i]);
  }
  outl("");
  return 0; 
}
