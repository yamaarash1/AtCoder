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
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define mod 998244353;

int main() {
  int n;
  cin >> n;
  int a[n];
  rep(i,n)cin >> a[i];
  map<int, map<int, int>> mp; // mp[i][j] := i番目までの数のうち、jは何個あるか
  map<int, int> amt;
  for (int i = 0; i < n; i++){
    amt[a[i]]++;
    mp[i][a[i]] = amt[a[i]];
  }
  int q;
  cin >> q;
  return 0;
}
