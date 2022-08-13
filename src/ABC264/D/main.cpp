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
  string a = "atcoder";
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i <= 6; i++)
  {
    //一緒ならスルー
    if (a[i] == s[i])
      continue;
    int order;
    //a[i]について
    //a[i]の文字はs[i]の何番目にあるか
    for (int j = i; j <= 6; j++)
    {
      if (a[i] == s[j])
      {
        order = j;
        break;
      }
    }
    for (int k = order; k > i;k--){
      swap(s[k], s[k - 1]);
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
