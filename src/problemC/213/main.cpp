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
  int h, w, n;
  cin >> h >> w >> n;
  pair<int, int> a[n], b[n];
  set<int> a_set, b_set;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    a_set.insert(x);
    b_set.insert(y);
    a[i] = {x, i};
    b[i] = {y, i};
  }
  sort(a, a + n);
  sort(b, b + n);
  int a_sort[n], b_sort[n];
  map<int, int> a_map, b_map;
  int count = 1;
  for (auto x : a_set)
  {
    a_map[x] = count;
    count++;
  }
  count = 1;
  for (auto x : b_set)
  {
    b_map[x] = count;
    count++;
  }
  for (int i = 0; i < n; i++)
  {
    a_sort[a[i].second] = a_map[a[i].first];
    b_sort[b[i].second] = b_map[b[i].first];
  }
  for (int i = 0; i < n;i++){
    cout << a_sort[i] << " " << b_sort[i] << endl;
  }
  return 0;
}
