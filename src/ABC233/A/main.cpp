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
  int x, y;
  cin >> x >> y;
  if(x>=y){
    cout << 0 << endl;
    return 0;
  }
  int tmp = y - x;
  int ans;
  if (tmp % 10 == 0)
    ans = tmp / 10;
  else
    ans = 1 + tmp / 10;
  cout << ans << endl;
  return 0;
}
