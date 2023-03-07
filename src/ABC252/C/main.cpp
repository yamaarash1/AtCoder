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
  int n;
  cin >> n;
  string s[n];
  for (int i = 0;i<n;i++){
    cin >> s[i];
  }
  vector<int> time(10, 0);
  map<int, multiset<int>> m;
  for (int i = 0; i < n;i++){
    for (int j = 0; j < 10;j++){
      m[s[i][j] - '0'].insert(j);
    }
  }
  for (int i = 0; i < 10;i++){
    int max_order = 0;
    for(auto c : m[i]){
      max_order = max(max_order, c);
      time[i] = 10 * (m[i].count(c) - 1);
    }
    time[i] += max_order;
  }
  int ans = 2147483647;
  for (int i = 0; i < 10;i++){
    ans = min(ans, time[i]);
  }
  cout << ans << endl;
  return 0;
}
