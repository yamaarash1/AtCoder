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
  string a[n];
  for (int i = 0; i < n; i++)
  {
    int b;
    cin >> b;
    a[i] = to_string(b);
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n;j++){
      //下
      string s = "";
      s += a[i][j];
      for (int k = 1; k < n; k++){
        s += a[i][(j + k) % n];
      }
      ans = max(ans, stoi(s));

      //右
      s = "";
      s += a[i][j];
      for (int k = 1; k < n; k++){
        s += a[(i + k) % n][j];
      }
    }
  }
    return 0;
}
