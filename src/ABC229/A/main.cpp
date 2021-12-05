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
  string s1, s2;
  cin >> s1 >> s2;
  //.# #.
  //#. .#
  if(s1[0]=='.' && s1[1]=='#' && s2[0]=='#' && s2[1]=='.'){
    cout << "No" << endl;
    return 0;
  }
  if(s1[0]=='#' && s1[1]=='.' && s2[0]=='.' && s2[1]=='#'){
    cout << "No" << endl;
    return 0;
  } 
  cout << "Yes" << endl;
  return 0;
}
