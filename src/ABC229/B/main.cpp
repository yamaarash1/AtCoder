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
  string a, b;
  cin >> a >> b;
  if(b>a){
    swap(a, b);
  }
  int sum = 0;
  int zure = a.length() - b.length();
  for (int i = b.length() - 1; i >= 0; i--) {
    sum = (int)(a[i+zure] - '0') + (int)(b[i] - '0');
    if (sum >= 10) {
      cout << "Hard" << endl;
      return 0;
    }
  }
  cout << "Easy" << endl;
  return 0;
}
