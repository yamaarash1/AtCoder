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
  string S;
  cin >> S;
  bool flag[10];
  int res = 0;
  for (int i = 0; i < 10000; i++)
  {
    bool ok = true;
    for (int j = 0; j < 10; j++)
    {
      flag[j] = false;
    }
    int target = i;
    for (int j = 0; j < 4; j++)
    {
      flag[target % 10] = true;
      target = target / 10;
    }
    for (int j = 0; j < 10;j++){
      if(S[j]=='o' && flag[j]==false){
        ok = false;
        break;
      }
      if(S[j]=='x' && flag[j]==true){
        ok = false;
        break;
      }
    }
    if(ok)
      res++;
  }
  cout << res << endl;
  return 0;
}
