#include <iostream>
#include <cstring>
#include <cstdio>
#include<algorithm>
#include <queue>
#include <cmath>
#include <limits>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s,t;
  cin >> s;
  if(s.length()==1) {
    cout << s << endl;
    cout << s << endl;
    return 0;
  }
  int count = 0;
  string ans = s;
  t = s;
  while (count < s.length()) {
    string tmp = t.substr(1, s.length() - 1) + t[0];
    ans = min(ans, tmp);
    t = tmp;
    count++;
  }
  cout << ans << endl;
  count = 0;
  ans = s;
  t = s;
  while (count < s.length()) {
    string tmp = t.substr(1, s.length() - 1) + t[0];
    ans = max(ans, tmp);
    t = tmp;
    count++;
  }
  cout << ans << endl;
  return 0;
}
