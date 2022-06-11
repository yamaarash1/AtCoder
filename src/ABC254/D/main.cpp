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
  int cnt = 0;
  int n_mini_cnt = 0;
  int arr[n+1];
  int ans = 0;
  
  // 平方数*平方数
  for (int i = 1; i <= n; i++)
  {
    arr[i] = i * i;
  }
  int lim = sqrt(n);
  for (int i = 1; i < lim; i++)
  {
    for (int j = i + 1; j < lim;j++){
      if(arr[i] * arr[j] <= n){
        ans++;
      }
    }
  }

  // i*i
  ans = ans + n;

  cout << ans << endl;
  return 0;
}
