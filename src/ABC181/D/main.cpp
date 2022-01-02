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
  map<char,int> s_num;
  map<char,int> e;
  for (int i = 0; i < s.length();i++){
    s_num[s[i]]++;
  }
  int count = 1;
  bool ok = false;
  string e_mul;
  while (8 * count <= 1000)
  {
    int tmp = 8 * count;
    if (tmp < 10 && s.length() > 1){
      e_mul = "00" + to_string(tmp);
    }else if(tmp < 100 && s.length() > 2){
      e_mul = "0" + to_string(tmp);
    }else{
      e_mul = to_string(tmp);
    }

    count++;
    for (int i = 0; i < e_mul.length(); i++)
    {
      e[e_mul[i]]++;
    }

    for (int i = 0; i < e_mul.length(); i++)
    {
      if(s_num[e_mul[i]] >= e[e_mul[i]]){
        ok = true;
        continue;
      }else{
        ok = false;
        break;
      }
    }
    e.clear();
    if (ok)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
