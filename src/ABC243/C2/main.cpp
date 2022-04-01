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
  int y_max = 0;
  set<int> value;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
    if(y[i] > y_max){
      y_max = y[i];
    }
    value.insert(y[i]);
  }
  string s;
  cin >> s;
  map<int, int> right_min, left_max;
  for (int i = 0; i < n; i++)
  {
    right_min[y[i]] = 1000000000;
    left_max[y[i]] = -1000000000;
  }
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'R'){
      if(right_min[y[i]] > x[i]){
        right_min[y[i]] = x[i];
      }
    }else{
      if(left_max[y[i]] < x[i]){
        left_max[y[i]] = x[i];
      }
    }
  }
  bool ok = false;
  for (auto x : value)
  {
    //cout << x << " right: " << right_min[x] << " left: " << left_max[x] << endl;
    if(right_min[x] < left_max[x]){
      ok = true;
    }
  }
  if(ok)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
