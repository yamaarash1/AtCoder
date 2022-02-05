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
  string s;
  cin >> s;
  string s_rev = s;
  reverse(s_rev.begin(), s_rev.end());
  if (s == s_rev)
  {
    cout << "Yes" << endl;
    return 0;
  }
  int count = 0;
  for (int i = 0; i < s.length();i++){
    if(s_rev[i] == 'a'){
      count++;
    }else{
      break;
    }
  }
  int count = 0;
  for (int i = 0; i < count; i++)
  {
    if(s[i] == 'a'){
      s.erase(s.begin());
    }else{
      break;
    }
  }
  s = s.substr(rev_count, s.length());
  s_rev = s_rev.substr(rev_count, s.length());
  if (s == s_rev)
  {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
