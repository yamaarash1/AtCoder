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

int main() {
  int Q;
  cin >> Q;
  int x, q;
  queue<int> que;
  priority_queue<int, std::vector<int>, greater<int>> p_que;
  for (int i = 0; i < Q; i++) {
    cin >> q;
    if(q==1){
      cin >> x;
      que.push(x);
    }else if(q==2){
      if (p_que.size() == 0) {
        cout << que.front() << endl;
        que.pop();
      } else {
        cout << p_que.top() << endl;
        p_que.pop();
      }
    }else if (q == 3) {
      while(que.size()) {
        p_que.push(que.front());
        que.pop();
      }
    }
  }
  return 0;
}
