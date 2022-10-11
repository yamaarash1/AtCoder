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
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
vector<vector<int>> G(200009);
deque<int> ans;
int n, x, y;
vector<bool> pass(200009);
bool stop;

void rec(int a) {
  cout << a << ": " << "start" << endl;
  if(!stop) ans.push_back(a);
  if(a == y) {
    stop = true;
    return;
  }
  pass[a] = true;
  for (int i = 0; i < G[a].size(); i++){
    if(pass[G[a][i]]) {
      continue;
    }
    rec(G[a][i]);
    cout << a << ": pass" << endl;
  }
  if(!stop) 
    ans.pop_back();
  cout << a << ": "
       << "end!!!" << endl;
  return;
}

int main() {
  cin >> n >> x >> y;
  for (int i = 0; i < n-1; i++)
  {
    int u,v;
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  pass[x] = true;
  stop = false;
  rec(x);
  for (auto x : ans){
    cout << x << " ";
  }
  cout << endl;
  return 0;
}
