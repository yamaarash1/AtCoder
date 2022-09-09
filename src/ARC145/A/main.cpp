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
  int n;
  string s;
  cin >> n >> s;
  if ((s[0] == 'B' || s[n - 1] == 'A') && s != "BA") {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
