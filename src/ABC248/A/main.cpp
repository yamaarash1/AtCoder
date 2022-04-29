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
  int m[10];
  for (int i = 0; i < 10; i++)
  {

    m[i] = 0;
  }
  for (int i = 0; i < s.length(); i++)
  {
    int a = s[i] - '0';
    m[a]++;
  }
  for (int i = 0; i < 10;i++){
    if (m[i] == 0)
    {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
