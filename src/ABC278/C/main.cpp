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
  int n, q;
  cin >> n >> q;
  map<pair<int, int>, bool> f;
  while(q){
    int t, a, b;
    cin >> t >> a >> b;
    if(t == 1) {
      f[{a, b}] = true;
    } else if(t == 2) {
      f[{a, b}] = false;
    } else {
      if(f[{a, b}] && f[{b, a}]) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
    q--;
  }
  return 0;
}
