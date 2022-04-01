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
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

struct human{
  int x;
  int y;
  char d;
};

bool x_cmp(const struct human& p, const struct human& q) {
  return p.x < q.x;
}

int main()
{
  int n;
  cin >> n;
  int x[n], y[n];
  set<int> y_v;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
    y_v.insert(y[i]);
  }
  string s;
  cin >> s;
  char d[n];
  human p[n];
  for (int i = 0; i < n; i++)
  {
    p[i] = {x[i], y[i], s[i]};
  }
  sort(p, p+n, x_cmp);
  map<int, set<char>> m;
  for (int i = 0; i < n;i++){
    cout << i << " " << p[i].x << " " << p[i].y << " " << p[i].d << endl;
    m[p[i].x].insert(p[i].d);
  }
  for(auto a : m[1]){
    cout << a << " ";
  }
  cout <<endl;
  for (auto a : y_v)
  {
    string ans = "";
    for (auto b : m[a])
    {
      cout << b <<endl;
    }
    if (ans == "RL")
    {
      cout << "Yes" << endl;
      return 0;
    }
    cout << ans << endl;
  }
  cout << "No" << endl;
  return 0;
}
