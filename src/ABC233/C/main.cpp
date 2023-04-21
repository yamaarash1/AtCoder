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
ll n, x;
vector<vector<ll>> L(100000);
vector<ll> nums;
void calc(ll o)
{
  if(o == n) {
    return;
  }
  vector<ll> tmp;
  for (ll i = 0; i < L[o].size();i++){
    for (ll j = 0; j < nums.size();j++){
      tmp.push_back(L[o][i] * nums[j]);
    }
  }
  for (ll i = 0; i < tmp.size();i++){
    cout << tmp[i] << endl;
  }
    nums = tmp;
  calc(o + 1);
}

int main() {
  cin >> n >> x;
  for (ll i = 0; i < n;i++){
    ll num;
    cin >> num;
    for (ll j = 0; j < num;j++){
      ll a;
      cin >> a;
      L[i].push_back(a);
    }
  }
  for (ll i = 0; i < L[0].size();i++){
    nums.push_back(L[0][i]);
  }
  calc(1);
  ll ans = 0;
  for (ll i = 0; i < nums.size(); i++)
  {
    //cout << nums[i] << endl;
    if(nums[i] == x) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
