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
  ll k;
  cin >> s >> k;
  bool all_one = true;
  for (int i = 0; i < s.length(); i++)
  {
    if(s[i] != '1') {
      all_one = false;
      break;
    }
  }
  if(all_one) {
    cout << "1" << endl;
    return 0;
  }
  for (int i = 0; i < s.length(); i++)
  {
    if(s[i] == '1') {
      if(k <= (i+1)) {
        cout << "1" << endl;
        return 0;
      }
      continue;
    }
    cout << s[i] << endl;
    return 0;
  }
  return 0;
}
