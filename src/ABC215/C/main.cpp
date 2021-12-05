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
  string s;
  int k;
  cin >> s >> k;
  sort(s.begin(),s.end());
  while(k>1){
    next_permutation(s.begin(), s.end());
    k--;
  }
  cout << s << endl;
  return 0;
}
