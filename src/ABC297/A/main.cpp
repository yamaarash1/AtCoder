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
  int n, d;
  cin >> n >> d;
  int t[n];
  for (int i = 0;i<n;i++){
    cin >> t[i];
  }
  sort(t, t + n);
  for (int i = 0; i < n - 1;i++){
    if(abs(t[i] - t[i + 1]) <= d){
      cout << t[i + 1] << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
