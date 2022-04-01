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
  int n;
  cin >> n;
  set<int> a;
  for (int i = 0; i < n;i++){
    int b;
    cin >> b;
    a.insert(b);
  }
  cout << a.size() << endl;
  return 0;
}
