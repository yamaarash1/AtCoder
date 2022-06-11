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
  int a, b, c;
  cin >> a >> b >> c;
  int x[3];
  x[0] = a;
  x[1] = b;
  x[2] = c;
  sort(x, x + 3);
  if(x[1] == b){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
