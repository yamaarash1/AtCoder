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
#include <unordered_set>
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
int start = -1;
int n;
map<int,int> g;
map<int,bool> passed;
map<int,bool> finished;

void dfs(int v) {
  if(finished[v]) return;
  if(passed[v] && !finished[v]){
    start = v;
    return;
  }
  passed[v] = true;
  dfs(g[v]);
  finished[v] = true;
  return;
}

int main() { 
  in(n);
  rep(i,n+1) {
    g[i] = -1;
  }
  rep(i, n) {
    int tmp;
    in(tmp);
    g[i+1] = tmp;
  }
  dfs(1);
  int now = start;
  vector<int> s;
  while(1) {
    s.push_back(now);
    now = g[now];
    if(now == start) {
      break;
    }
  }
  cout << s.size() << endl;
  for(auto x : s){
    cout << x <<" ";
  }
  cout << endl;
  return 0; 
}
