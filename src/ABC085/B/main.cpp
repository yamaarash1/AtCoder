#include <iostream>
#include <cstring>
#include <cstdio>
#include<algorithm>
#include <queue>
#include <cmath>
#include <limits>
#include <map>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int N;
int d[1000];
int main() {
  cin >> N;
  set<int> monchi;
  int d;
  for (int i = 0; i < N; i++) {
    cin >> d;
    monchi.insert(d);
  }
  cout << monchi.size() << endl;
  return 0;
}
