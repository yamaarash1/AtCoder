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
  int n, w;
  cin >> n >> w;
  int a[n];
  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    int weight = a[i];
    if (weight <= w && m[weight] == 0)
    {
      ans++;
      m[weight]++;
    }
    for (int j = i + 1; j < n; j++)
    {
      int weight = a[i] + a[j];
      if(weight <= w && m[weight] == 0){
        ans++;
        m[weight]++;
      }
      for (int k = j + 1; k < n; k++) {
        int weight = a[i] + a[j] + a[k];
        if(weight <= w && m[weight] == 0){
          ans++;
          m[weight]++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
