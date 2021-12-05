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

int main() {
  int N, K, A;
  cin >> N >> K >> A;
  int ans = A;
  for (int i = 1; i < K; i++) {
    ans += 1;
    if(ans > N){
      ans = 1;
    }
  }
  cout << ans << endl;
  return 0;
}
