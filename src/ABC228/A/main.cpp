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
  int S, T, X;
  bool over = false;
  cin >> S >> T >> X;
  if(S>T){
    over = true;
  }
  if(over){
    if (X >= S || X < T) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }else{
    if (X >= S && X < T) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
