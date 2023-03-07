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
ll n, m;
vector<multiset<ll>> g(300009);
vector<bool> passed(300009);
map<ll, ll> leaf_num;
map<ll, ll> branch_num;
bool ok = true;
void dfs(ll p, ll parent, bool is_root)
{
  passed[p] = true;
  leaf_num[parent]++;
  branch_num[parent] += g[p].count(p) > 0 ? g[p].count(p) / 2 : 0;
  for (auto x : g[p])
  {
    if(passed[x])
      continue;
    branch_num[parent] += g[p].count(x);
    //cout << parent << " " << p << " " << x << " " << g[p].count(x) << endl;
    dfs(x, p, false);
  }
  if(is_root){
    //cout << "check " << parent <<": " << branch_num[parent] << " " << leaf_num[parent] << endl;
    if (branch_num[parent] != leaf_num[parent])
      ok = false;
  }
  return;
}
int main() {
  cin >> n >> m;
  for (ll i = 0; i < m;i++){
    ll u, v;
    cin >> u >> v;
    g[u].insert(v);
    g[v].insert(u);
  }
  for (ll i = 1; i <= n;i++){
    if(passed[i])
      continue;
    dfs(i, i, true);
  }
  if(ok)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
