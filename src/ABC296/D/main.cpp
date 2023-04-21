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
  int n, m;
  cin >> n >> m;
  if(n * n < m) {
    cout << -1 << endl;
    return 0;
  }
  int m_r = floor(sqrt(m));
  cout << m_r << endl;
  for (int i = m_r; i * i <= n; i++)
  {
    int tar = m_r * i;
    if (tar >= m)
    {
      cout << tar << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
