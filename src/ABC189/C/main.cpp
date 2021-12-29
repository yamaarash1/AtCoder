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
#include <deque>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int max = 0;
  for (int i = 0; i < n; i++)
  {
    int m = a[i];
    for (int j = i; j < n; j++)
    {
      m = min(m, a[j]);
      int wip = (j - i + 1) * m;
      if (wip > max)
        max = wip;
    }
  }
  cout << max << endl;
  return 0;
}
