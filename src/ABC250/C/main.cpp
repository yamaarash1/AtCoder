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
  int n, q;
  cin >> n >> q;
  int a[n+1], b[n+1];
  for (int i = 1; i <= n; i++)
  {
    a[i] = i;//number->order, iはj番目
    b[i] = i;//order->number, i番目はj
  }
  while (q--)
  {
    int x;
    cin >> x;
    if(a[x] == n) {
      int tmp_a = b[a[x] - 1];
      int tmp_b = b[a[x] - 1];
      swap(a[x], a[tmp_a]);
      swap(b[x], b[tmp_b]);
    } else {
      int tmp_a = b[a[x] + 1];
      int tmp_b = b[a[x] + 1];
      swap(a[x], a[tmp_a]);
      swap(b[x], b[tmp_b]);
    }
    //for (int i = 1; i <= n;i++){
    //  cout << b[i] << " ";
    //}
    //cout << endl;
  }
  for (int i = 1; i <= n;i++){
    cout << b[i] << " ";
  }
  cout << endl;
  return 0;
}
