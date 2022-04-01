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
  int A[n];
  for (int i = 0; i < n;i++){
    cin >> A[i];
  }
  int ans;
  bool find = false;
  for (int i = 0; i <= 2000; i++)
  {
    find = false;
    for (int j = 0; j < n; j++)
    {
      if (i == A[j]) {
        find = true;
      }
    }
    if(!find){
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
