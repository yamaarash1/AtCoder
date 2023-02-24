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
  
  // 数字のところに数字以外が入っているかcheck
  string part = s.substr(1, s.length()-2);
  for (int i = 0; i < part.length();i++){
      if(part[i] - '0' >= 0 && part[i] - '0' <= 9) {
        continue;
      }
      else
      {
        cout << "No" << endl;
        return 0;
      }
  }

  //100000 以上 999999 以下かcheck
  int part_s = atoi(part.c_str());
  if (part_s < 100000 || part_s > 999999)
  {
      cout << "No" << endl;
      return 0;
  }
  string part_s_string = to_string(part_s);
  //長さ 6 の文字列かcheck
  if (part_s_string.length() != 6)
  {
    cout << "No" << endl;
    return 0;
  }
  
  //一文字の英大文字かcheck
  int int_s0 = (int) s[0] - '0';
  int int_s1 = (int) s[s.length()-1] - '0';
  if ((int_s0 < 17 || int_s0 > 42))
  {
    cout << "No" << endl;
    return 0;
  }
  if ((int_s1 < 17 || int_s1 > 42))
  {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}
