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

string toBinary(int n, int k){
    string r;
    int count = 0;
    while (count < k)
    {
      r += (n % 2 == 0 ? "0" : "1");
      n /= 2;
      count++;
    }
    return r;
}

int main() {
  int n, m;
  cin >> n >> m;
  pair<int, int> ab[m];
  rep(i, m) cin >> ab[i].first >> ab[i].second;
  int k;
  cin >> k;
  int cd[k][2];
  rep(i, k) cin >> cd[i][0] >> cd[i][1];

  bool flag[n+1];
  rep(i, n+1) flag[i] = false;
  int ans = 0;
  int len = (int)pow(2, k);
  for (int i = 0; i < len; i++)
  {
    string bit = toBinary(i, k);
    for (int j = 0; j < k; j++){
      int num = (int)bit[j] - '0';
      flag[cd[j][num]] = true;
    }
    int tmp = 0;
    for (int j = 0; j < m;j++){
      if(flag[ab[j].first] ==true && flag[ab[j].second] ==true){
        tmp++;
      }
    }
    if(tmp>ans){
      ans = tmp;
    }
    rep(i, n+1) flag[i] = false;
  }
  cout << ans << endl;

  return 0;
}
