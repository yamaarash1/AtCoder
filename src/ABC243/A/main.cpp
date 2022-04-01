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
  int v, a, b, c;
  cin >> v >> a >> b >> c;
  while(1){
    v = v - a;
    if(v<0){
      cout << "F" << endl;
      break;
    }
    v = v - b;
    if (v < 0)
    {
      cout << "M" << endl;
      break;
    }
    v = v - c;
    if (v < 0)
    {
      cout << "T" << endl;
      break;
    }
  }
  return 0;
}
