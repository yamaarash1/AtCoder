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
  int n, q;
  cin >> n >> q;
  set<int> stay;
  set<int> call;
  for(int i = 1; i <= n; i++){
    stay.insert(i);
  }
  while(q--) {
    int t;
    cin >> t;
    if (t == 1) {
      std::set<int>::iterator itr = stay.begin();
      int t = *itr++;
      stay.erase(t);
      call.insert(t);
    } else if (t == 2) {
      int x;
      cin >> x;
      call.erase(x);
    } else {
      std::set<int>::iterator itr = call.begin();
      int t = *itr++;
      cout << t << endl;
    }
    //cout << "stay: ";
    //for (auto x : stay)
    //{
    //  cout << x << " ";
    //}
    //cout << endl;
    //cout << "call: ";
    //for (auto x : call)
    //{
    //  cout << x << " ";
    //}    
    //cout << endl;
  }
  return 0;
}
