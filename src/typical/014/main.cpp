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
#define rep(i, n) for (long long int i = 0; i < (long long int)(n); i++)
long long int N;
long long int A[1000009];
long long int B[1000009];

int main() {
  cin >> N;
  for (long long int i = 0; i < N;i++) {
    cin >> A[i];
  }
  for (long long int i = 0; i < N;i++) {
    cin >> B[i];
  }
  sort(A, A + N);
  sort(B, B + N);
  long long int res = 0;
  for (long long int i = 0; i < N; i++) {
    res += abs(A[i] - B[i]);
  }
  cout << res << endl;
  return 0;
}
