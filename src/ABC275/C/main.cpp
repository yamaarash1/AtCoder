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
  string s[9];
  for (int i = 0; i < 9;i++){
    cin >> s[i];
  }
  set<vector<pair<int, int>>> st;
  for(int i = 0; i < 9; i++) {
      for(int j = 0; j < 9; j++) {
          for(int dx = -8; dx < 9; dx++) {
              for(int dy = -8; dy < 9; dy++) {
                pair<int,int> p1 = make_pair(i, j);
                pair<int,int> p2 = make_pair(p1.first + dx, p1.second + dy);
                pair<int,int> p3 = make_pair(p2.first - dy, p2.second + dx);
                pair<int,int> p4 = make_pair(p3.first - dx, p3.second - dy);
                if(p2.first < 0 || p2.first >= 9 || p2.second < 0 || p2.second >= 9)
                  continue;
                if(p3.first < 0 || p3.first >= 9 || p3.second < 0 || p3.second >= 9)
                  continue;
                if(p4.first < 0 || p4.first >= 9 || p4.second < 0 || p4.second >= 9)
                  continue;
                if(p1 == p2 || p1 == p3 || p1 == p4 || p2 == p3 || p2 == p4 || p3 == p4) {
                  continue;
                }              
                if(s[p1.first][p1.second] == '#' && s[p2.first][p2.second] == '#' && s[p3.first][p3.second] == '#' && s[p4.first][p4.second] == '#') {
                  vector<pair<int, int>> v = {p1, p2, p3, p4};
                  sort(v.begin(), v.end());
                  st.insert(v);
                }
              }
          }
      }
  }
  int ans = st.size();
  cout << ans << endl;
  return 0;
}
