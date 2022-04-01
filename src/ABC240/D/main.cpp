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
#include <stack>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  int n;
  cin >> n;
  stack<pair<int, int>> s;
  int a;
  cin >> a;
  s.push({a, 1});
  int count = 1;
  cout << count << endl;
  for (int i = 1; i < n; i++)
  {
    cin >> a;
    count++;
    if(s.top().first == a){
      s.top().second += 1;
      if(s.top().second == a){
        count -= a;
        s.pop();
      }
    }else{
      s.push({a, 1});
    }
    cout << count << endl;
  }
  return 0;
}
