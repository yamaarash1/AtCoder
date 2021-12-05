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
  int N;
  cin >> N;
  string s, t;
  map<string,int> name;
  bool find = false;
  rep(i, N) {
    cin >> s >> t;
    string na = s + " " + t;
    name[na]++;
  }
  for (auto i = name.begin(); i != name.end();i++) {
    int count = i->second;
    if(count > 1){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
