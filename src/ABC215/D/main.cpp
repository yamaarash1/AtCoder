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
set<ll> primes;

void prime_factorize(long long N) {
  for (long long a = 2; a * a <= N; ++a)
  {
    if (N % a != 0)
      continue;
    while (N % a == 0)
    {
      N /= a;
    }
    primes.insert(a);
  }
  if (N != 1) primes.insert(N);
  return;
}

int main() {
  ll n, m;
  set<ll> ans;
  vector<int> numbers;
  cin >> n >> m;
  for (ll i = 0; i < n; i++) {
    ll a;
    cin >> a;
    prime_factorize(a);
  }
  for (ll i = 1; i <= m;i++){
    numbers.push_back(i);
  }
  for(auto x : primes) {
    auto itr = numbers.begin();
    while (itr != numbers.end()) {
      if (((*itr) % x) == 0) {
        itr = numbers.erase(itr);
      } else {
        itr++;
      }
    }
  }
  int len = numbers.size();
  cout << len << endl;
  for (auto x : numbers) {
    cout << x << endl;
  }
  return 0;
}
