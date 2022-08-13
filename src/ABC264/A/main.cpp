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
  string a = "atcoder";
  int l, r;
  cin >> l >> r;
  for (int i = l - 1; i < r;i++){
    cout << a[i];
  }
  cout << endl;
  return 0;
}
