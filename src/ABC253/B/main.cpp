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
  int h, w;
  cin >> h >> w;
  string s[h];
  for (int i = 0; i < h;i++){
    cin >> s[i];
  }
  pair<int, int> a, b;
  a.first = -1;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w;j++){
      if(s[i][j] == 'o'){
        if(a.first == -1){
          a.first = i;
          a.second = j;
        }else{
          b.first = i;
          b.second = j;
        }
      }
    }
  }
  int ans = abs(a.first - b.first) + abs(a.second - b.second);
  cout << ans << endl;
  //cout << a.first << " " << a.second << " " << b.first << " " << b.second << endl;
  return 0;
}
