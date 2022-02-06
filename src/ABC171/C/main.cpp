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
  ll n;
  cin >> n;
  string ans = "";
  while(n){
    n--;
    char res = 'a' + (n % 26);
    ans = ans + res;
    n /= 26;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}
