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
  ll k;
  cin >> k;
  string ans = "";
  while (k > 0)
  {
    ans = to_string((k % 2) * 2) + ans;
    k = k / 2;
  }
  cout << ans << endl;
  return 0;
}
