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

#define MAXP 1000005
vector<long long> prime_list;

//素数を列挙してくれる関数: 計算量O(NlogN)
void construct_plist(long long n){
  vector<bool> fl(n, false);
  for(int i=2;i<n;i++){
    if(fl[i]){continue;}
    prime_list.push_back(i);
    for(int j=i;j<n;j+=i){fl[j]=true;}
  }
}

int main() {
  construct_plist(MAXP);
  return 0;
}