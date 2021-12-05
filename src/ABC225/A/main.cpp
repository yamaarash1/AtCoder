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

int main() {
  string s;
  int res;
  cin >> s;
  set<string> array;
  sort(s.begin(), s.end());
  do {
    array.insert(s);
  } while (next_permutation(s.begin(), s.end()));

  cout << array.size() << endl;
  return 0;
}
