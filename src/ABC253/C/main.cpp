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
  int q;
  cin >> q;
  set<int> s;
  map<int, int> m;
  for (int i = 0; i < q; i++)
  {
    int num, x, c;
    cin >> num;
    if(num == 1){
      cin >> x;
      m[x]++;
      s.insert(x);
    }
    else if (num == 2)
    {
      cin >> x >> c;
      int del = min(m[x], c);
      m[x] -= del;
      if(m[x]<= 0){
        s.erase(x);
      }
    }
    else if (num == 3)
    {
      auto itr_begin = s.begin();
      auto itr_end = s.rbegin();
      int min_num = *itr_begin;
      int max_num = *itr_end;
      int ans = abs(max_num - min_num);
      cout << ans << endl;
    }
  }
  return 0;
}
