#include <iostream>
#include <cstring>
#include <cstdio>
#include<algorithm>
#include <queue>
#include <cmath>
#include <limits>
#include <map>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  int X[n];
  int Y[n];
  for (int i = 0; i < n; i++) {
    cin >> X[i] >> Y[i];
  }
  if (n == 1){
    cout << "0" << endl;
    return 0;
  }
  int res = 0;
  for (int i = 0; i < n - 1; i++) {
    res += abs(X[i] - X[i + 1]) + abs(Y[i] - Y[i + 1]);
  }
  cout << res << endl;
  return 0;
}
