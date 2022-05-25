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
  int n;
  cin >> n;
  int same[10][10]; //iがj番目に出てくる回数はsame[i][j]
  //初期化
  string s;
  for (int i = 0; i < 10;i++){
    for (int j = 0; j < 10;j++){
      same[i][j] = 0;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cin >> s;
    for (int j = 0; j < s.length(); j++)
    {
      same[s[j] - '0'][j]++;
    }
  }

  int ans = n * 10 + 999;
  for (int i = 0; i < 10; i++)
  {
    int time = 0;
    for (int j = 0; j < 10; j++)
    {
      time = max(time, 10 * (same[i][j] - 1) + j);
    }
    ans = min(ans, time);
  }
  cout << ans << endl;
  return 0;
}
