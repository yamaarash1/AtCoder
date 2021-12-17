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
  int n, q;
  string s;
  cin >> n >> s >> q;
  int t, a, b;
  bool t2 = false;
  for (int i = 0; i < q; i++)
  {
    cin >> t >> a >> b;
    string tmp = s;
    if (t == 1)
    {
      if(!t2){
        tmp.replace(a - 1, 1, s.substr(b-1,1));
        tmp.replace(b - 1, 1, s.substr(a-1,1));
        s = tmp;
      }else{
        if(a <= n){
          a = a - 1 + 2;
        }else{
          a = a - 1 - 2;
        }
        if(b <= n){
          b = b - 1 + 2;
        }else{
          b = b - 1 - 2;
        }
        tmp.replace(a, 1, s.substr(b,1));
        tmp.replace(b, 1, s.substr(a,1));
        s = tmp.substr(n, n) + tmp.substr(0, n);
        t2 = !t2;
      }
      //cout << s << endl;
    }
    else
    {
      t2 = !t2;
    }
  }
  cout << s << endl;

  return 0;
}
