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
  string s,t;
  in2(s,t);
  // 接頭辞かどうか
  bool isPrefix = true;
  for(int i = 0;i<s.length(); i++){
    if(s[i] != t[i]) {
      isPrefix = false;
      break;
    }
  }
  // 接尾語かどうか
  bool isSuffix = true;
  int o = 0;
  for(int i = t.length() - s.length();i<t.length(); i++){
    if(s[o] != t[i]) {
      isSuffix = false;
      break;
    }
    o++;
  }
  if(isPrefix && isSuffix) outl(0);
  else if(isPrefix && !isSuffix) outl(1);
  else if(!isPrefix && isSuffix) outl(2);
  else outl(3);
  return 0; 
}
