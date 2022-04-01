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
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, x;
  cin >> n >> x;

  int a[n], b[n];

  rep(i, 0, n) {
    cin >> a[i] >> b[i];
    cout << a[i] << " " << b[i];
  }

  set<int> st;
  st.insert(0);
  for (int i = 0; i < n;i++){
    for (auto itr = st.begin(); itr != st.end(); itr++) {
      st.insert(*itr + a[i]);
      st.insert(*itr + b[i]);
    }
    //for(auto x : st){
    //  cout << x << endl;
    //}
  }

  if (st.count(x) == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}