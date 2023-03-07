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
  map<int, map<int, bool>> pass;
  pass[0][0] = true;
  int x = 0;
  int y = 0;
  for (int i = 0; i < s.length(); i++){
    if(s[i] == 'R') {
      x++;
    } else if(s[i] == 'L') {
      x--;
    } else if(s[i] == 'U') {
      y++;
    } else if(s[i] == 'D') {
      y--;
    }
    if(pass[x][y]) {
      cout << "Yes" << endl;
      return 0;
    }
    pass[x][y] = true;
  }
  cout << "No" << endl;
  return 0;
}
