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
  int A[n+1];
  int B[n+1];
  A[0] = 0;
  B[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    cin >> A[i];
    B[i] = 0;
  }
  for (int i = 1; i <= n;i++){
    for (int j = i; j <= n; j++){
      B[i] += A[j];
    }
  }
  for (int i = 0; i <= n;i++){
    B[i] = B[i] % 360;
  }
  sort(B, B + n+1);
  int ans = 0;
  int sa;
  for (int i = 0; i < n; i++)
  {
    int sa = B[i + 1] - B[i];
    if (sa>ans){
      ans = sa;
    }
  }
  sa = 360 - B[n];
  if (sa>ans){
      ans = sa;
  }
  cout << ans << endl;
  return 0;
}
