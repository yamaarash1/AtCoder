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
  vector<int> v;
  for (int i = 0; i<s.length(); i++) {
    switch(s[i]) {
      case 'a':
        v.push_back(1);
        break;
      case 't':
        v.push_back(2);
        break;
      case 'c':
        v.push_back(3);
        break;
      case 'o':
        v.push_back(4);
        break;
      case 'd':
        v.push_back(5);
        break;
      case 'e':
        v.push_back(6);
        break;
      case 'r':
        v.push_back(7);
        break;
    }
  }
  int ans = 0;
  //for (int i = 0; i < s.length(); i++){
  //  cout << v[i] << " ";
  //}
  //cout << endl;
  for (int i = 0; i < s.length(); i++)
  {
    for (int j = 0; j < i; j++)
    {
        if (i == j)
          continue;
        if (v[j] > v[i])
        {
          ans++;
        }
    }
    }
  cout << ans << endl;
  return 0;
}
