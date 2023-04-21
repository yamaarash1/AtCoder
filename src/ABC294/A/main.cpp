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
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n;i++){
    int a;
    cin >> a;
    if(a % 2 == 0) {
      cout << a << " ";
    }
  }
  cout << endl;
  return 0;
}
