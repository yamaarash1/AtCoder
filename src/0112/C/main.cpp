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
  for (int i = 1; i <= len; i++)
  {
    int ans = n % 10 * i;
    cout << ans;
    n = n / (10 * i);
  }
  cout << endl;
}
