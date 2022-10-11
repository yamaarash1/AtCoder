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
  int x[n];
  int pos = 0;
  bool zero = false;
  int neg = 0;
  int border = 0;
  bool is_neg = true;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
    if(x[i] < 0) {
      neg++;
    } else {
      if(is_neg) {
        border = i;
      }
      if(x[i] == 0) {
        zero = true;
      } else {
        pos++;
      }
    }
  }
  return 0;
}
