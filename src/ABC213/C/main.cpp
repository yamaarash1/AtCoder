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
  int h, w, n;
  cin >> h >> w >> n;
  pair<int, int> A[n], B[n], ans[n];
  for (int i = 0; i < n;i++){
    cin >> A[i].first >> B[i].first;
    A[i].second = i;
    B[i].second = i;
  }
  sort(A, A + n);
  sort(B, B + n);
  int a = A[0].first;
  int b = B[0].first;
  A[0].first = 1;
  B[0].first = 1;
  for (int i = 1; i < n; i++)
  {
    if(a == A[i].first){
      A[i].first = A[i - 1].first;
    }else{
      a = A[i].first;
      A[i].first = A[i - 1].first + 1;
    }

    if(b == B[i].first){
      B[i].first = B[i - 1].first;
    }else{
      b = B[i].first;
      B[i].first = B[i - 1].first + 1;
    }
  }
  for (int i = 0; i < n;i++){
    ans[A[i].second].first = A[i].first;
    ans[B[i].second].second = B[i].first;
  }
  for (int i = 0; i < n;i++){
    cout << ans[i].first << " " << ans[i].second << endl;
  }
  return 0;
}
