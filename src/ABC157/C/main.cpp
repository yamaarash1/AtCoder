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
  int n, m;
  cin >> n >> m;
  int s[m], c[m];
  for (int i = 0; i < m; i++)
  {
    cin >> s[i] >> c[i];
    s[i]--;
  }
  for (int i = 0; i < 1000; i++)
  {
    string tmp = to_string(i);
    if(tmp.length() != n)
      continue;

    bool find = true;
    for (int j = 0; j < m; j++)
    {
      for (int k = 0; k < n;k++){
        if(k == s[j] && (tmp[k] - '0') != c[j]){
          find = false;
        }
      }
    }
    if(find){
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
