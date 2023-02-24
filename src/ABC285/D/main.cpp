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
int n;
map<string, vector<string>> nxt;
map<string, string> parent;
map<string, bool> pass;

void dfs(string s) {
  for(auto t : nxt[s]) {
    if(pass[t]) {
      cout << "No" << endl;
      exit(0);
    }
    pass[t] = true;
    dfs(t);
  }
}

string root(string s, int cnt) {
  if(cnt == n + 1) {
    cout << "No" << endl;
    exit(0);
  }
  if(parent[s] == "") return s;
  return root(parent[s], cnt + 1);
}

int main() {
  cin >> n;
  for (int i = 0; i < n;i++){
    string s, t;
    cin >> s >> t;
    nxt[s].push_back(t);
    parent[t] = s;
  }
  for(auto name : nxt) {
    if (!pass[name.first])
    {
      string rt = root(name.first, 1);
      pass[rt] = true;
      dfs(rt);
    }
  }
  cout << "Yes" << endl;
  return 0;
}
/*
3
a b
b c
d a
間違い
*/