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
  int A[n], B[n];
  for (int i = 0; i < n;i++){
    cin >> A[i];
  }
  for (int i = 0; i < n;i++){
    cin >> B[i];
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if(A[i] == B[i]){
      ans++;
    }
  }
  cout << ans << endl;
  ans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n;j++){
      if(A[i] == B[j] && i != j){
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
