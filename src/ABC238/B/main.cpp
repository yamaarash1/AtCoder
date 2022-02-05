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
  for (int i = 1; i <= n; i++)
  {
    
  }
  for (int i = 0; i <= n;i++){
    for (int j = i; i <= n; j++){
      B[i] += B[i];
    }
  }
  return 0;
}
