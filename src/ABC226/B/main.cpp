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

int main() {
  int N;
  cin >> N;
  set<vector<int>> L;
  for (int i = 0; i < N;i++){
    int l;
    cin >> l;
    vector<int> v(l);
    for (auto& x : v) cin >> x;
    L.insert(v);
  }
  cout << L.size() << endl;
  return 0;
}
