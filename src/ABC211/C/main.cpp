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
  string chokudai = "chokudai";
  map<int, char> chokudai_map;
  map<char, int> mp;
  for (int i = 0; i < chokudai.length(); i++) {
    chokudai_map[chokudai[i]] = i;
  }
  for (int i = 0; i < s.length(); i++){
    if(s[i] == 'c') {
      mp[s[i]]++;
    } else {
      mp[s[i]] += mp[chokudai[chokudai_map[s[i]] - 1]];
    }
  }
  int ans = mp['i'];
  cout << ans << endl;
  return 0;
}
