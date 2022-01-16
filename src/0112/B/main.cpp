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

int keta(int n){
  int count = 0;
  while (n > 0)
  {
    count++;
    n /= 10;
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  int len = keta(n);
  int div = pow(10, len-1);
  int ans = 0;
  int kakeru = 1;
  for (int i = 0; i < len; i++)
  {
    int tmp = n / div;
    ans += tmp * kakeru;
    n -= tmp * div;
    div = div/10;
    kakeru *= 10;
  }
  cout << ans << endl;
}
