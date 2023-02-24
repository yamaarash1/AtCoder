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
  string s;
  cin >> s;
  int jdg[n];
  int ans = 0;
  int check = 0;
  rep(i, n)
  {
    jdg[i] = s[i] == '0' ? 0 : 1;
    if(s[i] == '1') check++;
  }
  int w[n];
  rep(i, n) cin >> w[i];
  pair<int,int> p[n];
  rep(i,n) p[i] = {w[i], jdg[i]};
  sort(p, p + n);
  ans = check;
  for (int i = 0; i < n; i++)
  {
    cout << ans << endl;
    if(p[i].second == 0)
      check++;
    else
      check--;
    ans = max(ans, check);
  }
  cout << ans << endl;
  return 0;
}
