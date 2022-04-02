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
  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  if(x1 == x2){
    cout << x3;
  } else if (x2 == x3){
    cout << x1;
  } else {
    cout << x2;
  }
  cout << " ";
  if (y1 == y2)
  {
    cout << y3;
  }
  else if (y2 == y3)
  {
    cout << y1;
  }
  else
  {
    cout << y2;
  }
  cout << endl;
  return 0;
}
