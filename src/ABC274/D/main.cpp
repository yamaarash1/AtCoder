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
int n, x, y;
int a[10000];
bool ok = false;

int main() {
  cin >> n >> x >> y;
  for (int i = 0;i < n;i++){
    cin >> a[i];
  }
  int now_x = a[0];
  int now_y = 0;
  if(ok)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
