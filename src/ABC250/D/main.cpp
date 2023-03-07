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
#define MAXP 1000005
vector<long long> prime_list;

//素数を列挙してくれる関数: 計算量O(NlogN)
void construct_plist(long long n){
  vector<bool> fl(n, false);
  for(int i=2;i*i*i<n;i++){
    if(fl[i]){continue;}
    prime_list.push_back(i);
    for(int j=i;j<n;j+=i){fl[j]=true;}
  }
}

int main() {
  ll n;
  cin >> n;
  construct_plist(MAXP);
  sort(prime_list.begin(), prime_list.end(), std::greater<int>{});
  //cout << prime_list.size() << endl;
  ll ans = 0;
  for (ll i = 0; i < prime_list.size(); i++) {
    for (ll j = i + 1; j < prime_list.size(); j++){
      if(prime_list[i] * prime_list[i] * prime_list[i] * prime_list[j] <= n)
        ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
