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
  int n;
  string s;
  cin >> n >> s;
  for (int i = 0; i < s.length();i++){
    if(s[i] == 'x') {
      cout << "No" << endl;
      return 0;
    }
  }
  bool ok = false;
  for (int i = 0; i < s.length();i++){
    if(s[i] == 'o') {
      ok = true;
    }
  }
  if(ok) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
