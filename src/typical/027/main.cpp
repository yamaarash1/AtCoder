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
  string s;
  map<string, int> S;
  for (int i = 1; i <= n; i++) {
    cin >> s;
    if(!S.count(s)){
      S[s] = i;
      cout << i << endl;
    }
  }
  return 0;
}
