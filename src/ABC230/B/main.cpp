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
  string S,s;
  cin >> S;
  int cut = 0;
  bool find_o = false;
  for (int i = 0; i < S.length(); i++) {
    if(S[i]=='o'){
      s = S.substr(i);
      find_o = true;
      cut = i;
      break;
    }
  }
  bool ac = true;
  if(find_o){
    for (int i = 0; i < s.length(); i++) {
      if(i%3==0 && s[i]=='o'){
        continue;
      } else if(i%3==1 && s[i]=='x'){
        continue;
      }else if(i%3==2 && s[i]=='x'){
        continue;
      }
      ac = false;
      break;
    }
    s = S.substr(0, cut);
  }else{
    s = S;
  }
  if (s.length() > 2) {
    ac = false;
  }
  for (int i = 0; i < s.length(); i++) {
    if(s[i]!='x'){
      ac = false;
    }
  }
  if (ac) cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
