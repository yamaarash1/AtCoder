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
int p_gcd;

int gcd(int a, int b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}

int main() {
  ll n;
  cin >> n;
  ll p[n];
  for (ll i = 0; i < n; i++)
  {
    cin >> p[i];
  }
  //最小公倍数を計算
  p_gcd = p[0];
  for (int i = 0;i<n;i++){
    p_gcd = gcd(p_gcd, p[i]);
  }
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    p[i] /= p_gcd;
    while (p[i] % 2 == 0)
    {
      p[i] /= 2;
			count++;
    }
    while(p[i] % 3 == 0){
			p[i] /= 3;
			count++;
		}
		if(p[i] != 1){
			cout << "-1" << endl;
			return 0;
		}
  }
  cout << count << endl;
  return 0;
}
