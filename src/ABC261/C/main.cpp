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
  map<string, int> name;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    if(name[s] >= 1) {
      cout << s << "(" << name[s] << ")" << endl;
    } else {
      cout << s << endl;
    }
    name[s]++;
  }
    return 0;
}
