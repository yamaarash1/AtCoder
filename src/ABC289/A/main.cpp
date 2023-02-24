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
  for (int i = 0; i < s.length();i++){
    if(s[i] == '0'){
      cout << 1;
    } else {
      cout << 0;
    }
  }
  cout << endl;
  return 0;
}
