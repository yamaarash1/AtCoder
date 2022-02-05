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
  int a, b;
  cin >> s >> a >> b;
  swap(s[a-1], s[b-1]);
  cout << s << endl;
  return 0;
}
