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

int main() {
  long long n = 1;
  vector<long long> vc;
  while (n < 100000000000) {
    if(n % 10000 == 0){
      cout << "now:" << n << endl;
    }
    long long ans1 = 0;
    for (long long a = 1; a * a * a <= n; a++) {
      for (long long b = a; a * b * b <= n; b++) {
        ans1 += n / a / b - b + 1;
      }
	  }
  
    long long ans2 = 0;
    for (int a = 1; a <= cbrt(n); a++) {
      for (int b = a; b <= sqrt(n / a); b++) {
        ans2 += (n / a / b) - b + 1;
      }
    }
    if(ans1 != ans2){
      vc.push_back(n);
      cout << "wrong!!" << endl;
    }
    n++;
  }
  cout << "Wrong list" << endl;
  for (auto x : vc) {
    cout << x << endl;
  }
  return 0;
}
