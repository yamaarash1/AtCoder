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
  map<int, int> out;
  while (q--)
  {
    int num, x;
    cin >> num >> x;
    if(num == 1) {
      out[x]++;
    } else if(num == 2) {
      out[x] += 2;
    } else {
      if(out[x] >= 2){
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}
