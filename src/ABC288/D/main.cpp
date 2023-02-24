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
  int n, k;
  cin >> n >> k;
  int a[n+1];
  int sum[n + 1];
  for (int i = 1; i <= n;i++){
    cin >> a[i];
  }
    sum[1] = a[1];
  for (int i = 2; i <= n; i++)
  {
    sum[i] = sum[i-1] + a[i];
  }
  for (int i = 1; i < n;i++){
    cout << sum[i] << " ";
  }
  cout << endl;
  exit(0);
  int q;
  cin >> q;
  while(q--) {
    int l, r;
    cin >> l >> r;

  }
  return 0;
}
