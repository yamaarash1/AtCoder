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
#define mod 998244353;

int main() {
  int q;
  cin >> q;
  int s = 1;
  int keta = 1;
  while (q--)
  {
    int num, x;
    cin >> num;
    if (num == 1)
    {
      cin >> x;
      s *= 10;
      s += x;
      s %= mod;
      int tmp = s;
      keta = 1;
      while(tmp > 0){
        if(tmp <= 9){
          break;
        }
        tmp /= 10;
        keta *= 10;
      }
      cout << s << endl;
    }
    else if (num == 2)
    {
      if(keta != 1) {
        s %= keta;
      }
      s %= mod;
    }
    else if (num == 3)
    {
      s %= mod;
      cout << s << endl;
    }
  }
  return 0;
}
