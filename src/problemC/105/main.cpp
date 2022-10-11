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
  deque<int> d;
  while (true) {
    if (n&1) {
      d.push_front(1);
      n--;
      n/=-2;
    } else {
      d.push_front(0);
      n/=-2;
    }
    if (n==0)
      break;
  }
    for (auto x : d)
        cout<<x;
    cout << endl;
    return 0;
}
