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

int main() {
  int n;
  cin >> n;
  int a[n];
  int ans = I_MAX;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < (1 << (n - 1)); i++) {
    int calc_or = 0;
		int calc_xor = 0;
		for (int j = 0; j <= n; j++) {
      //orを計算
			if (j < n) {
        calc_or |= a[j];
      }
      //しきりをするなら今までのxorの値と今回のorの値をxorで比較
			if (j == n || (i >> j & 1)){
        calc_xor = (calc_xor ^ calc_or);
        calc_or = 0;
      }
    }
    ans = min(ans, calc_xor);
  }
  cout << ans << endl;
  return 0;
}
