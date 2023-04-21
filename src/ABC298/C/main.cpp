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
  int n,q;
  cin >> n >> q;
  map<int, multiset<int>> box;
  map<int, set<int>> num;
  while(q--){
    int m, a, b;
    cin >> m;
    if(m == 1) {
      cin >> a >> b;
      box[b].insert(a);
      num[a].insert(b);
    } else if (m == 2) {
      cin >> a;
      for(auto x: box[a]) {
        cout << x << " ";
      }
      cout << endl;
    } else if(m == 3){
      cin >> a;
      for(auto x: num[a]) {
        cout << x << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
