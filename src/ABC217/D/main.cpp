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
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int L, Q;
  set<int> cutting;
  cin >> L >> Q;
  cutting.insert(0);
  cutting.insert(L);
  int c, x;
  for (int i = 0; i < Q; i++) {
    cin >> c >> x;
    if(c == 1){
      cutting.insert(x);
    }
    if(c == 2){
      auto right = cutting.lower_bound(x);
      auto left = right--;
      int res = -(*right - *left);
      cout << res << endl;
    }
  }
  return 0;
}
