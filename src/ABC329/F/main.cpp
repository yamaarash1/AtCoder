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
  int n, q;
  in2(n, q);
  map<int, set<int>> st; // ball_num[a][b] = 1: 箱aに色bが1つ入っている
  rep(i, n)
  {
    int c;
    in(c);
    st[i].insert(c);
  }
  while (q--)
  {
    int a, b;
    in2(a, b);
    a--;
    b--;
    if (st[a].size() < st[b].size())
    {
      for (auto x : st[a])
      {
        st[b].insert(x);
      }
      st[a].clear();
      outl(st[b].size());
    }
    else
    {
      for (auto x : st[b])
      {
        st[a].insert(x);
      }
      st[b].clear();
      outl(st[a].size());
      swap(st[a], st[b]);
    }
  }
  return 0;
}
