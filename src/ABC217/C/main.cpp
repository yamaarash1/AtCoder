#include <iostream>
#include <cstring>
#include <cstdio>
#include<algorithm>
#include <queue>
#include <cmath>
#include <limits>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)

int main() {
  int n;
  int p[1000000];
  int q[1000000];
  cin >> n;
  rep(i, n) cin >> p[i];
  rep(i, n) { q[p[i]] = i; }
  rep(i, n) { cout << q[i] << " "; }
  cout << endl;

  return 0;
}
