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
vector<bool> taka(3), aoki(3);
int a, b;
void check(vector<bool> hoge, int v) {
  if (v == 1) {
    taka[0] = true;
  }
  else if(v==2){
    taka[1] = true;
  }
  else if (v == 3)
  {
    taka[0] = true;
    taka[1] = true;
  }  else if(v == 4) {
    taka[2] = true;
  }
  else if (v == 5)
  {
    taka[0] = true;
    taka[2] = true;
  }
  else if (v == 6)
  {
    taka[1] = true;
    taka[2] = true;
  }
  else if (v == 7)
  {
    taka[0] = true;
    taka[1] = true;
    taka[2] = true;
  }
}
int main() {
  cin >> a >> b;
  check(taka, a);
  check(aoki, b);
  vector<bool> me(3);
  for (int i = 0; i < 3;i++){
    if(taka[i] || aoki[i]) {
      me[i] = true;
    }
  }
  int ans = 0;
  if (me[0])
  {
    ans += 1;
  }
    if (me[1])
  {
    ans += 2;
  }
    if (me[2])
  {
    ans += 4;
  }
  cout << ans << endl;
  return 0;
}
