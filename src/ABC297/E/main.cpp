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
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

int main() { 
  int n,k;
  cin >>n>>k;
  int a[n];
  for (int i = 0;i<n;i++){
    cin >> a[i];
  }
  set<int> s;
  for (int i = 0; i < n;i++){
    s.insert(a[i]);
  }
  bool over = false;
  while (s.size() < 100000) {
    for (auto x : s){
      for (int i = 0; i < n;i++){
        s.insert(x + a[i]);
        if(s.size() >= k){
          over = true;
          break;
        }
      }
      if(over){
        break;
      }
    }
    if(over){
      break;
    }
  }
  int ans = 0;
  int order = 0;
  for (auto x : s)
  {
    order++;
    if(x ==k){
      ans = x;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
