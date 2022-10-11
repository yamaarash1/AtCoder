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

int nCm(int n, int m){
  int ans = 1;
  for (int i = 0; i < m; i++)
  {
    ans *= n - i;
  }
  for (int i = m; i > 1; i--)
  {
    ans /= i;
  }
  return ans;
}

int main() {
  int n, m;
  cin >> n >> m;
  int pair_num = nCm(n, 2);
  vector<vector<int>> x(m);
  set<pair<int, int>> s;
  for (int i = 0; i < m; i++)
  {
    int k;
    cin >> k;
    for (int j = 0; j < k;j++){
      int y;
      cin >> y;
      x[i].push_back(y);
    }
  }
  for (int i = 0; i < m; i++){
    for (int j = 0; j < x[i].size();j++){
      for (int k = j+1; k < x[i].size(); k++){
        int pair_1 = x[i][j];
        int pair_2 = x[i][k];
        if(pair_1 > pair_2) {
          swap(pair_1, pair_2);
        }
        s.insert({pair_1, pair_2});
      }
    }
  }
  if(s.size() == pair_num){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
