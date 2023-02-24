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
  vector<int> p(n, 0);
  for (int i = 0; i < n;i++){
    cin >> p[i];
  }
  vector<int> c(n, 0); //何回回したか
  for (int i = 0; i < n; i++)
  {
    int j = i;
    c[(p[i] - 1 - j + n) % n]++;
    c[(p[i] - j + n) % n]++;
    c[(p[i] + 1 - j + n) % n]++;
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = max(ans, c[i]);
  }
  cout << ans <<endl;
  return 0;
}
