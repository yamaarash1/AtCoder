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
  int N, Q;
  cin >> N >> Q;
  string s;
  for (int i = 0; i <= N;i++){
    s += to_string(i);
  }
  
  vector<tuple<int, int, int>> q;
  int num, x, y;
  for (int i = 0; i < Q; i++) {
    cin >> num >> x;
    if (num != 3) {
      cin >> y;
    }else{
      y = -1;
    }
    q.emplace_back(num, x, y);
  }
    // pair<int, int> G[N];
    // for (int i = 1; i <= N;i++){
    //   G[i].first = -1; //前
    //   G[i].second = -1; //後
    // }
    // vector<tuple<int, int, int>> q;
    // int num, x, y;
    // for (int i = 0; i < Q; i++) {
    //   cin >> num >> x;
    //   if (num != 3) {
    //     cin >> y;
    //   }else{
    //     y = -1;
    //   }
    //   q.emplace_back(num, x, y);
    // }
    //   for (int i = 0; i < Q; i++) {
    //     if (num == 1) {
    //       G[get<1>(q[i])].second = get<2>(q[i]);
    //       G[get<2>(q[i])].first =  get<1>(q[i]);
    //     }
    //     if (num == 2) {
    //       G[get<1>(q[i])].second = -1;
    //       G[get<2>(q[i])].first = -1;
    //     }
    //     if (num == 3) {
    //       int u = get<1>(q[i]);
    //       while (G[u].first != -1) {
    //         u = G[u].first;
    //       }
    //       while (G[u].second != -1) {
    //         cout << u << " ";
    //         u = G[u].second;
    //       }
    //       cout << endl;
    //     }
    //   }
    return 0;
}
