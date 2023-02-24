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
int n, m;
int a[109];
int p[109];

int main() {
  cin >> n >> m;
  rep(i, m) cin >> a[i];
  int p[n+1];
  for (int i = 0;i<=n;i++){
    p[i] = i;
  }
  vector<int> v;
  for (int i = 0; i < m; i++)
  {
    if(a[i] + 1 != a[i + 1]) {
      if(v.size() == 0) {
        swap(p[a[i]], p[a[i] + 1]);
      } else {
        v.push_back(v[v.size() - 1] + 1);
        v.push_back(v[v.size() - 1] + 1);
        reverse(v.begin(), v.end());
        for (int j = 0; j < v.size() / 2; j++) {
          swap(p[v[j]], p[v[v.size() - 1 - j]]);
        }
      }
    } else {
      v.push_back(a[i]);
    }
  }
  for (int i = 1;i <= n;i++){
    cout << p[i] << " ";
  }
  cout << endl;
  return 0;
}
