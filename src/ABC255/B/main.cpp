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
  int n, k;
  cin >> n >> k;
  int a[k];
  int x[n], y[n];
  for (int i = 0; i < k;i++){
    cin >> a[i];
    a[i]--;
  }
  for (int i = 0; i < n;i++){
    cin >> x[i] >> y[i];
  }
  long double min_dis[n]; //明かりがある場所と最も近いのは？
  for (int i = 0; i < n;i++){
    min_dis[i] = 999999999999999999;
  }
  for (int i = 0; i < k; i++)
  {
    for (int j = 0; j < n; j++)
    {
      bool exist = false;
      for (int x = 0; x < k; x++){
        if(a[x] == j){
          exist = true;
          break;
        }
      }
      if(!exist) {
        long double x_dis = x[a[i]] - x[j];
        long double y_dis = y[a[i]] - y[j];
        long double dis = x_dis * x_dis + y_dis * y_dis;
        min_dis[j] = min(min_dis[j], dis);
      }
    }
  }
  long double ans = 0;
  for (int i = 0; i < n; i++)
  {
    bool exist = false;
    for (int j = 0; j < k; j++)
    {
      if(a[j] == i) {
        exist = true;
        break;
      }
    }
    if(!exist)
      ans = max(ans, min_dis[i]);
  }
  cout << std::fixed << std::setprecision(8) << sqrt(ans) << endl;
  return 0;
}
