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
  for (int i = 0; i < s.length() - 1; i++)
  {
    cout << s[i];
    if (s[i] == 'n')
    {
      if(s[i+1] == 'a'){
        cout << "y";
      }
    }
  }
  cout << s[s.length() - 1];
  cout << endl;
  return 0;
}