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
  string s[10];
  int a, b, c, d;
  vector<int> c_exist;
  vector<int> a_exist;
  for (int i = 0; i < 10; i++)
  {
    cin >> s[i];
    for (int j = 0; j < 10;j++){
      if(s[i][j] == '#'){
        c_exist.push_back(j);
        a_exist.push_back(i);
      }
    }
  }
  a = *min_element(a_exist.begin(), a_exist.end()) + 1;
  b = *max_element(a_exist.begin(), a_exist.end()) + 1;
  c = *min_element(c_exist.begin(), c_exist.end()) + 1;
  d = *max_element(c_exist.begin(), c_exist.end()) + 1;
  cout << a << " " << b << endl;
  cout << c << " " << d << endl;
  return 0;
}
