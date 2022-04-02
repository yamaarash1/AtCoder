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
  int n, k, x;
  cin >> n >> k >> x;
  int a[n];
  for (int i = 0; i < n;i++){
    cin >> a[i];
  }
  pair<int,int> div[n];
  for (int i = 0; i < n; i++)
  {
    int d = div[i].second / x;
    if (d <= 0){
      d = 1;
    }
    int calc = (a[i] % (d * x));
    if (calc > (x / 2)){
      calc = (a[i] % (d+1 * x));
    }else{
      calc = (a[i] % (d * x));
    }
    div[i] = {calc, a[i]};
  }
  sort(div, div + n);
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int k_use = 0;
    if(k > 0){
      int d = div[i].second / x;
      int calc;
      if (d <= 0)
      {
        calc = (div[i].second % (1 * x));
      }else{
        calc = (div[i].second % (d * x));
      }
      if (calc < (x / 2))
      {
        k_use = d;
      }
      else
      {
        k_use = d + 1;
      }
      if(k < k_use) {
        k_use = k;
      }
    }
    cout << div[i].second << " " << x << " " << k_use << endl;
    ans += max(div[i].second - x * k_use, 0);
    k -= k_use;
  }
  cout << ans << endl;
  return 0;
}
