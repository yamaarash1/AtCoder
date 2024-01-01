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


int main() { 
  int n;
  in(n);
  string s;
  in(s);
  int q;
  in(q);
  map<int, bool> change;
  int is_upper = 0;
  while(q--) {
    int t,x;
    char c;
    in3(t,x,c);
    if(t == 1) {
      s[x-1] = c;
      change[x-1] = true;
    } else if(t == 2) {
      is_upper = -1;
      change.clear();
    } else if(t == 3) {
      is_upper = 1;
      change.clear();
    }
  }
  rep(i, n) {
    if(!change[i]) {
      if(is_upper == 1) {
        s[i] = toupper(s[i]);
      } else if (is_upper == -1) {
        s[i] = tolower(s[i]);
      }
    }
  }
  outl(s);
  return 0; 
}
