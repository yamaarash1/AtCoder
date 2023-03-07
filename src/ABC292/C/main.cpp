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

int ans = 0;

int amount(int m) {
  if(m == 1){
    return 1;
  }
  int ok = 0;
  for (int i = 1; i * i <= m; i++)
  {
    if(m%i==0){
      if(m/i == i){
        ok++;
      } else {
        ok += 2;
      }
    }
  }
  return ok;
}
int main()
{
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n / 2; i++)
  {
    //cout << i << " " << n - i << " :";
    if (i == n - i)
    {
      ans += amount(i) * amount(n - i);
    }
    else
    {
      ans += 2 * amount(i) * amount(n - i);
    }
    //cout << endl;
  }
  cout << ans << endl;
  return 0;
}
