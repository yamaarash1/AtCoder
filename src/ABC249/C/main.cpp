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
  int n,k;
  cin >> n >> k;
  string s[n];
  map<char, int> m;
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }
  int ans = 0;
  for (int bit = 0; bit < (1 << n); bit++)
  {
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
      if (bit & (1<<i)) {
        for (int j = 0; j < s[i].size(); j++) {
          m[s[i][j]]++;
        }
      }
    }
    for(auto x: m) {
      if(x.second == k){
        cnt++;
      }
    }
    ans = max(ans, cnt);
    m.clear();
  }
  cout << ans << endl;
  return 0;
}
