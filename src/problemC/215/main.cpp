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

int main() {
  string s;
  int k;
  cin >> s >> k;
  sort(s.begin(), s.end());
  vector<string> list;
  do
  {
    list.push_back(s);
  } while (next_permutation(s.begin(), s.end()));
  cout << list[k - 1] << endl;
  return 0;
}
