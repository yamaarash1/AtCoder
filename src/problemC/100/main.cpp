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

int calc(int m) {
  int count = 0;
  while(m % 2 !=1 ) {
    count++;
    m /= 2;
  }
  return count;
}
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n;i++){
    cin >> a[i];
  }
  int count = 0;
  for (int i = 0; i < n;i++){
    if(a[i]%2 == 0) {
      count += calc(a[i]);
    }
  }
  cout << count << endl;
  return 0;
}
