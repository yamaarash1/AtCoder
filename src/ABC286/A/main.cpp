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
  int n, p, q, r, s;
  cin >> n >> p >> q >> r >> s;
  int a[n+1];
  for (int i = 1; i <= n;i++){
    cin >> a[i];
  }
  vector<int> A;
  vector<int> B;
  for (int i = p; i <= q; i++){
    A.push_back(i);
  }
  for (int i = r; i <= s; i++){
    B.push_back(i);
  }
  for (int i = 0; i < A.size(); i++) {
    //cout << a[A[i]] << " " << a[B[i]] << endl;
    swap(a[A[i]], a[B[i]]);
  }
  for(int i = 1; i <= n; i++){
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}
