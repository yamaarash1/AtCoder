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
#define repabc(i, a, b, c) for (int i = (int)(a); int(b) < (int)(c); i++)
#define all(a) (a).begin(), (a).end()
#define allr(a) (a).rbegin(), (a).rend()
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

int main()
{
  int n, m;
  in2(n, m);
  int a[m];
  rep(i, m)
  {
    in(a[i]);
  }
  pair<int, int> max_pair = make_pair(n, 0); // {a,b}: aは人の番号、bは票数（最大値を保存）
  map<int, int> mp;                          // mp[a] = b: aは人の番号、bはその人の票数
  rep(i, m)
  {
    mp[a[i]]++;
    if(max_pair.second == mp[a[i]] && max_pair.first > a[i]) {
      max_pair = make_pair(a[i], mp[a[i]]);
    }
    if(max_pair.second < mp[a[i]]) {
      max_pair = make_pair(a[i], mp[a[i]]);
    }
    outl(max_pair.first);
  }
  return 0;
}
