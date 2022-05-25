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

int main() {
  string s;
  cin >> s;
  if(s.length() == 1){
    for (int i = 0; i < 6;i++){
      cout << s;
    }
  }
  if(s.length() == 2){
    for (int i = 0; i < 3;i++){
      cout << s;
    }
  }
  if(s.length() == 3){
    for (int i = 0; i < 2;i++){
      cout << s;
    }
  }
  cout << endl;
  return 0;
}
