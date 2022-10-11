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

string exchange(int i) {
  if (i <= 9) {
    return "000" + to_string(i);
  }
  if(i <= 99) {
    return "00" + to_string(i);
  }
  if(i <= 999) {
    return "0" + to_string(i);
  }
}
int main() {
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < 10000; i++)
  {
    string tmp = exchange(i);
    bool correct = true;
    for (int i = 0; i < 4; i++)
    {
      if(s[tmp[i] - '0'] == 'o' || s[tmp[i] - '0'] == '?') {
        continue;
      } else {
        correct = false;
        break;
      }
    }
    if(correct) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
