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
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
ll n, x, y;
map<ll, ll> red;
map<ll, ll> blue;

void dfs(ll amount, ll level, string color) {
  if(level == 1) {
    return;
  }
  if(color=="red") {
    red[level] -= amount;
    red[level - 1] += amount;
    blue[level] += x * amount;
    dfs(amount, level - 1, "red");
    dfs(x * amount, level, "blue");
  }
  else
  {
    blue[level] -= amount;
    red[level - 1] += amount;
    blue[level - 1] += y * amount;
    dfs(amount, level - 1, "red");
    dfs(y * amount, level - 1, "blue");
  }
  return;
}
int main() {
  cin >> n >> x >> y;
  red[n] = 1;
  dfs(1, n, "red");
  cout << blue[1] << endl;
  return 0;
}
