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
  int q;
  cin >> q;
  map<int, int> cnt;
  set<int> s;
  while (q--)
  {
    int n, x, c;
    cin >> n;
    if (n == 1)
    {
      cin >> x;
      if (cnt[x] == 0)
      {
        s.insert(x);
      }
      cnt[x]++;
    }
    else if (n == 2)
    {
      cin >> x >> c;
      if(cnt[x] <= c) {
        cnt[x] = 0;
        s.erase(x);
      }
      else {
        cnt[x] -= c;
      }
    }
    else
    {
      auto itr = s.begin();
      auto r_iter = s.rbegin();
      int start = *itr;
      int end = *r_iter;
      cout << end - start << endl;
    }
  }
  return 0;
}
