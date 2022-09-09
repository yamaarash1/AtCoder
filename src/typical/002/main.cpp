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
  if(n%2==1){
    return 0;
  }
  string s = "";
  for (int i = 0; i < n / 2; i++)
  {
    s += "(";
  }
  for (int i = 0; i < n / 2; i++)
  {
    s += ")";
  }
  do {
    int count = 0;
    bool ok = true;
    for (int i = 0; i < s.length(); i++)
    {
      if(s[i] == '(') {
        count++;
      } else {
        count--;
      }
      if(count < 0) {
        ok = false;
      }
    }
    if(ok && count != 0) {
      ok = false;
    }
    if(ok) {
      cout << s << endl;
    }
  } while(next_permutation(s.begin(), s.end()));
  return 0;
}
