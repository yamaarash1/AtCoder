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
  int N, X;
  cin >> N >> X;
  int A[N+9];
  bool know[N+9];
  for (int i = 1; i <= N;i++){
    cin >> A[i];
    know[i] = false;
  }
  int target = X;
  int ans = 0;
  while (!know[target]) {
    //cout << target << " -> " << A[target] << endl;
    ans++;
    know[target] = true;
    target = A[target];
  }
  cout << ans << endl;
  return 0;
}
