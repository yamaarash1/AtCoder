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
// 衝突: a.x < b.xのとき、a.y == b.y かつ a.dir = 'R', b.dir = 'L'のとき
int main() { 
  int n;
  cin >> n;
  tuple<int, int, char> axis[n];
  int x[n], y[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  string s;
  cin >> s;
  for (int i = 0; i < n;i++){
    axis[i] = make_tuple(x[i], y[i], s[i]);
  }
  sort(axis, axis + n);
  map<int, string> m;
  for (int i = 0;i < n; i++){
    m[get<1>(axis[i])] += get<2>(axis[i]);
  }
  //for(auto p : m) {
  //  cout << p.first << ": " << p.second << endl;
  //}
  for(auto p : m) {
    for (int i = 0;i < p.second.size();i++){
      if(p.second[i] == 'R') {
        if(p.second[i+1] == 'L') {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
