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
  int a[n], b[n], c[n];
  map<int, int> point;
  for (int i = 0; i < n;i++){
    cin >> a[i];
    point[a[i]] = 0;
  }
  for (int i = 0; i < n;i++){
    cin >> b[i];
    point[b[i]] = 0;
  }
  for (int i = 0; i < n;i++){
    cin >> b[i];
    point[c[i]] = 0;
  }
  for (int i = 0; i < n;i++){
    point[a[i]]++;
  }
  int ans = 0;
  for (int i = 0; i < n;i++){
    cout << point[c[i]] << endl;
  }
  cout << ans << endl;
  return 0;
}
