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
#include <numeric>
#include <array>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> arr(n);
  iota(begin(arr), end(arr), 0);
  bool ab[n][n];
  bool cd[n][n];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      ab[i][j] = false;
      cd[i][j] = false;
    }
  }
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    ab[a][b] = true;
    ab[b][a] = true;
  }
  for (int i = 0; i < m; i++){
    int c, d;
    cin >> c >> d;
    c--;
    d--;
    cd[c][d] = true;
    cd[d][c] = true;
  }
  do
  {
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++) {
          if (ab[i][j] != cd[arr[i]][arr[j]]) {
              ok = false;
          }
      }
    }
  if (ok) {
    cout << "Yes" << endl;
    return 0;
  }
  } while (next_permutation(begin(arr), end(arr)));
  cout << "No" << endl;
  return 0;
}
