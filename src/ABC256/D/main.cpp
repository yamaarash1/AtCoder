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
#include <list>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  vector<pair<int, int>> num;
  int n;
  cin >> n;
  while(n--) {
    int a, b;
    cin >> a >> b;
    num.push_back({a, 0});
    num.push_back({b, 1});
  }
  int count = 0;
  sort(num.begin(), num.end());
  for (auto x : num)
  {
    if(x.second == 0){
      if(count == 0)
        cout << x.first << " ";
      count++;
    }
    else
    {
      count--;
      if(count == 0)
        cout << x.first << endl;
    }
  }
  return 0;
}
