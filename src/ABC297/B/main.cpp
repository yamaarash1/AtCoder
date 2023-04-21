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
  string s;
  cin >> s;
  vector<int> b;
  vector<int> r;
  int k_o = -1;
  for (int i = 0; i < s.length(); i++)
  {
    if(s[i] == 'B'){
      b.push_back(i);
    }
    if(s[i] == 'R'){
      r.push_back(i);
    }
    if(s[i] == 'K'){
      k_o = i;
    }
  }
  int check = b[0] % 2 + b[1] % 2;
  if(check != 1) {
    cout << "No" << endl;
    return 0;
  }
  sort(r.begin(), r.end());
  if(k_o > r[0] && k_o < r[1]) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}
