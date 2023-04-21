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
map<int, vector<int>> m;
vector<int> ans;

void rec(int crr,int pre){
  ans.push_back(crr);
  for(int nxt:m[crr])if(nxt!=pre){
    rec(nxt,crr);
    ans.push_back(crr);
  }
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n - 1;i++){
    int a, b;
    cin >> a >> b;
    m[a].push_back(b);
    m[b].push_back(a);
  }
  for(int i = 1;i <= n; i++) {
    sort(m[i].begin(), m[i].end());
  }
  rec(1, -1);
  for(auto x: ans) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}
