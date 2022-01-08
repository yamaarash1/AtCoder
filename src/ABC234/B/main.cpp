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
  int n;
  cin >> n;
  int x[n], y[n];
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
  }
  long double res = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n;j++){
      long double tmp = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
      tmp = sqrt(tmp);
      if(res < tmp){
        res = tmp;
      }
    }
  }
  std::cout.precision(20);
  cout << res << endl;
  return 0;
}
