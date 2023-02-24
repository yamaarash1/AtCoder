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
  int p[n];
  for (int i = 0; i < n;i++){
    cin >> p[i];
  }
  int ok = false;
  do
  {
    if(ok) {
      for (int i = 0; i < n;i++){
        cout << p[i] << " ";
      }
      cout << endl;
      return 0;
    }
    ok = true;
  } while (prev_permutation(p, p + n));
  return 0;
}
