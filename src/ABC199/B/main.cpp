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
  int A[n], B[n];
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> B[i];
  }

  int a_max = -1;
  int b_min = 10000;

  for (int i = 0; i < n; i++)
  {
    if(A[i]>a_max)
      a_max = A[i];
    if(B[i]<b_min)
      b_min = B[i];
  }
  if(b_min - a_max<0)
    cout << 0 << endl;
  else
    cout << b_min - a_max + 1 << endl;
  return 0;
}
