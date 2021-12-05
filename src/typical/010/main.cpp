#include <iostream>
#include <cstring>
#include <cstdio>
#include<algorithm>
#include <queue>
#include <cmath>
#include <limits>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,Q;
  int C[1000000], P[1000000];
  int L[1000000], R[1000000];
  int sum_A[1000000], sum_B[1000000];
  cin >> N;
  for (int i = 1; i <= N;i++) cin >> C[i] >> P[i];
  cin >> Q;
  for (int i = 1; i <= Q; i++) cin >> L[i] >> R[i];

  for (int i = 1; i <= N;i++) {
    sum_A[i] = sum_A[i - 1];
    sum_B[i] = sum_B[i - 1];
    if (C[i] == 1) {
      sum_A[i] = sum_A[i] + P[i];
    }
    if (C[i] == 2) {
      sum_B[i] = sum_B[i] + P[i];
    }
  }

  for (int i = 1; i <= Q; i++){
    int res_A = sum_A[R[i]] - sum_A[L[i] - 1];
    int res_B = sum_B[R[i]] - sum_B[L[i] - 1];
    cout << res_A << " " << res_B << endl;
  }
  return 0;
}
