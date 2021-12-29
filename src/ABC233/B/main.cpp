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
  int l, r;
  string s;
  cin >> l >> r >> s;
  string s_reverse = s.substr(l - 1, r - l + 1);
  reverse(s_reverse.begin(), s_reverse.end());
  //cout << s_reverse << endl;
  int count = 0;
  for (int i = l - 1; i < r; i++)
  {
    //cout << i << ": " << s_reverse[count] << endl;
    s[i] = s_reverse[count];
    count++;
  }
  cout << s << endl;
  return 0;
}
