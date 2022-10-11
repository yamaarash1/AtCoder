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
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  set<int> hoge;
  hoge.insert(a);
  hoge.insert(b);
  hoge.insert(c);
  hoge.insert(d);
  hoge.insert(e);
  cout << hoge.size() << endl;
  return 0;
}
