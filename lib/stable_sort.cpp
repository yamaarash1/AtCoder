
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
  ll n;
  cin >> n;
  ll a[n], b[n];
  for(ll i = 0;i<n;i++){
    cin >> a[i] >> b[i];
  }
  vector<ll> p;
  for(ll i = 0;i<n;i++){
    p.push_back(i);
  }

  //stable_sort（条件をこちらで指定してNlog(N)でソート）
  auto f = [&](ll i, ll j) {
    if(a[i] * (a[j] + b[j]) == a[j] * (a[i] + b[i])) {
      return i < j;
    }
    return a[i] * (a[j] + b[j]) > a[j] * (a[i] + b[i]);
  };
  stable_sort(p.begin(), p.end(), f);
  //ここまで
  return 0; 
}