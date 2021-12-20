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
static string alp = "abcdefghijklmnopqrstuvwxyz";

int main() {
  string s, t;
  string tmp_s = "";
  cin >> s >> t;
  for (int i = 0; i < 26; i++)
  {
    tmp_s = s;
    for (int j = 0; j < s.length(); j++)
    {
      tmp_s[j] = (char) (((tmp_s[j] - 'a') + i) % 26 + 'a');
    }
    if(tmp_s == t){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
