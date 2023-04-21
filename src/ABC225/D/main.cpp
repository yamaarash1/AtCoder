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
  vector<int> front(n+1, -1);
  vector<int> back(n+1, -1);
  while (q--)
  {
    int num;
    cin >> num;
    if(num == 1) {
      int x, y;
      cin >> x >> y;
      front[y] = x;
      back[x] = y;
    } else if (num == 2) {
      int x, y;
      cin >> x >> y;
      back[x] = -1;
      front[y] = -1;
    } else {
      int x;
      cin >> x;
      vector<int> ans;
      int frontest = x;
      while (1) {
        if(front[frontest] == -1)
          break;
        frontest = front[frontest];
      }
      int order = frontest;
      while (order != -1 || order == frontest) {
        ans.push_back(order);
        order = back[order];
      }
      cout << ans.size() << " ";
      for (auto i : ans)
      {
        cout << i << " ";
      }
      cout << endl;
    }
  }
  return 0; 
}
