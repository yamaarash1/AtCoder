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
  int n, m;
  cin >> n >> m;
  double a[m];
  for (int i = 0; i < m; i++)
  {
    double tmp;
    cin >> tmp;
    tmp--;
    a[i] = tmp;
  }
  if(n==m){
    cout << 0 << endl;
    return 0;
  }
  if(m==0){
    cout << 1 << endl;
    return 0;
  }
  sort(a, a + m);
  double k = a[0];
  if(k==0)
    k = n - a[0] - 1;
  vector<double> white;
  white.push_back(a[0]);
  double tmp_k;
  for (int i = 1; i < m; i++)
  {
    tmp_k = a[i] - a[i - 1] - 1;
    if (k > tmp_k && tmp_k != 0)
      k = tmp_k;
    white.push_back(tmp_k);
  }
  tmp_k = (n - 1) - a[m - 1];
  if(k > tmp_k&& tmp_k!=0)
      k = tmp_k;
  white.push_back(tmp_k);
  int res = 0;
  for(auto w : white){
    res += ceil(w / k);
  }
  cout << res << endl;
  return 0;
}
