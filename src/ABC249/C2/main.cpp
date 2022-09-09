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

int main() {
  int n, k;
  cin >> n >> k;
  string s[n];
  for (int i = 0; i < n; i++){
    cin >> s[i];
  }
  int ans = 0;
  for (int i = 0; i < (1 << n); i++)
  {
    map<char, int> m;
    for (int j = 0; j < n; j++)
    {
      if(i & (1<<j)) {
        for (int l = 0; l < s[j].length(); l++) {
          m[s[j][l]]++;
        }
      }
    }
    int tmp = 0;
    for (auto x : m)
    {
      if(x.second==k){
        tmp++;
      }
    }
    ans = max(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}
