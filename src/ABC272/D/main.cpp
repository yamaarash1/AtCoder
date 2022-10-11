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

void clear(queue<pair<int,int>> q) {
  queue<pair<int,int>> empty;
  swap( q, empty );
}

int main() {
  int n, m;
  cin >> n >> m;
  int nijo = 1;
  vector<int> list;
  list.push_back(0);
  while (nijo * nijo <= 1000000)
  {
    list.push_back(nijo * nijo);
    nijo++;
  }
  set<pair<int, int>> useable;
  for (int i = 0; i < list.size();i++){
    for (int j = 0; j < list.size();j++){
      if(list[i] + list[j] == m) {
        useable.insert({i, j});
        useable.insert({-i, -j});
        useable.insert({i, -j});
        useable.insert({-i, j});
      }
    }
  }
  for (auto u : useable) {
    cout << u.first << " " << u.second << " " << u.first*u.first + u.second*u.second << endl;
  }
  int masu[n][n];
  bool pass[n][n];
  for (int i = 0; i < n;i++){
    for (int j = 0; j < n;j++){
      pass[i][j] = false;
    }
  }
  for (int i = 0; i < n;i++){
    for (int j = 0; j < n;j++){
      masu[i][j] = -1;
    }
  }
  masu[0][0] = 0;
  pass[0][0] = true;
  int count = 1;
  queue<pair<int,int>> que;
  queue<pair<int,int>> next_que;
  que.push({0, 0});
  next_que.push({0, 0});
  while(!next_que.empty()) {
    swap(que, next_que);
    clear(next_que);
    while (!que.empty()) {
      pair<int, int> v = que.front();
      que.pop();
      for (pair<int, int> nv : useable) {
        if (v.first + nv.first >= 0 && v.second + nv.second >= 0) {
          if(v.first + nv.first < n && v.second + nv.second < n) {
            pair<int, int> new_nv = {v.first + nv.first, v.second + nv.second};
            if(!pass[new_nv.first][new_nv.second]) {
              next_que.push(new_nv);
              pass[new_nv.first][new_nv.second] = true;
              masu[new_nv.first][new_nv.second] = count;
            }
          }
        }
      }
    }
    count++;
  }
  //for (int i = 0; i < n;i++){
  //  for (int j = 0; j < n;j++){
  //    cout << masu[i][j] << " ";
  //  }
  //  cout << endl;
  //}
  return 0;
}
