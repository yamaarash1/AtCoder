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
  string n;
  cin >> n;
  for (int i = 0; i < n.length();i++){
    if(i == 0)
      continue;
    cout << n[i];
  }
  cout << endl;
  return 0;
}
