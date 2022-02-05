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
  long double n;
  cin >> n;
  long double left = pow(2, n);
  long double right = n * n;
  if(left > right){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
