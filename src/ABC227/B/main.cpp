
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
  int N;
  cin >> N;
  int S[N];
  rep(i, N) cin >> S[i];
  set<int> list;
  int ans = 0;
  for (int a = 1; a < 200; a++) {
    for (int b = 1; b < 200;b++){
      int s = 4 * a * b + 3 * a + 3 * b;
      if(s<=1000){
        list.insert(s);
      }
    }
  }
  bool find = false;
  for (int i = 0; i < N; i++) {
    find = false;
    for(auto x : list){
      if(x==S[i]){
        find = true;
        break;
      }
    }
    if(!find){
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
