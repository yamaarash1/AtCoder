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
int N;
vector<int> G[1 << 18];

set<int> dfs(set<int> st, int v, bool step){
  if (st.size() == N / 2) return st;

  for (int i = 0; i < G[v].size(); i++) {
    int u = G[v][i];
    if(step){
      st.insert(u);
      return dfs(st, u, false);
    }else{
      return dfs(st, u, true);
    }
  }
}

int main() {
  cin >> N;
  int a, b;
  for (int i = 0; i < N-1; i++) {
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  int root;
  for (int i = 0; i < N-1;i++){
    if(G[i].size()==1){
      root = i;
      break;
    }
  }

  set<int> st;
  st.insert(root);

  set<int> res = dfs(st, root, false);

  for(auto x :res){
    cout << x << endl;
  }

  return 0;
}
