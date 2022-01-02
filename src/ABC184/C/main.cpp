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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if(a==c && a==d)
    cout << 0 << endl;
  if(a+b==c+d || a-b==c-d || abs(a-c)+abs(b-d)<=3)
    cout << 1 << endl;
  return 0;
}
