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
  int n;
  cin >> n;
  map<int, int> card;
  for (int i = 0; i <= n;i++){
    card[i] = 0;
  }
  for (int i = 0; i < 4 * n - 1;i++){
    int m;
    cin >> m;
    card[m]++;
  }
  for (int i = 1; i<=n; i++){
    if (card[i] != 4)
    {
      cout << i << endl;
      break;
    }
  }
  return 0;
}
