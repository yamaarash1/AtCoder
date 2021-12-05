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
  int a, b;
  vector<int> G[N+10];
  for (int i = 1; i <= N-1; i++) {
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  for (int i = 1; i <= N;i++){
    if(G[i].size() == N - 1){
      cout << "Yes" << endl;
      return 0;
    }
  } 
  cout << "No" << endl;
  return 0;
}
