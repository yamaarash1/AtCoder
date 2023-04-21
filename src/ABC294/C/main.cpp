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

int main() {
  int n, m;
  cin >> n >> m;
  int a[n], b[m];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int a_o = 0;
  int b_o = 0;
  vector<int> a_ans;
  vector<int> b_ans;
  int cnt = n + m;
  int order = 1;
  while (cnt--)
  {
    if(a_o >= n) {
      b_ans.push_back(order);
      b_o++;
      order++;
      continue;
    }
    if(b_o >= m) {
      a_ans.push_back(order);
      a_o++;
      order++;
      continue;
    }
    if(a[a_o] < b[b_o]) {
      a_ans.push_back(order);
      a_o++;
    } else {
      b_ans.push_back(order);
      b_o++;
    }
    order++;
  }
  for(auto x: a_ans) {
    cout << x << " ";
  }
  cout << endl;
  for (auto x : b_ans) {
    cout << x << " ";
  }
  cout << endl;
    return 0;
}
