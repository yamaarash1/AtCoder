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

int main() {
  int n, q;
  string s;
  cin >> n >> q >> s;
  int count = 0;
  for (int i = 0; i < q; i++)
  {
    int t, x;
    cin >> t >> x;
    if (t == 1) {
      count += x;
    }
    else
    {
      int a = (x - count) % n;
      cout << x << " " << count << " " << n << endl;
      cout << s[a] << endl;
    }
  }
    return 0;
}
