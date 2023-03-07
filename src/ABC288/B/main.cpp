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
  int n, k;
  cin >> n >> k;
  string s[n];
  for (int i = 0;i<n;i++){
    cin >> s[i];
  }
  sort(s, s+k);
  for (int i = 0;i<k;i++){
    cout << s[i] << endl;
  }
  return 0;
}