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
#define rep(i, n) for (lli = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  ll a, b, k;
  cin >> a >> b >> k;
  ll count = 0;
  while(a<b){
    count++;
    a = a * k;
  }
  cout << count << endl;
  return 0;
}
