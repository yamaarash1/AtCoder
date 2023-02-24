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
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
string n, k;
vector<string> v;

int main() {
  string n, k, k_rev;
  cin >> n >> k;
  k_rev = k;
  reverse(k_rev.begin(), k_rev.end());
  vector<string> v;
  v.push_back(k);
  v.push_back(k_rev);
  while(1) {
    k += "0";
    k_rev += "0";
    if(stoi(k) <= stoi(n)){
      v.push_back(k);
    } else {
      break;
    }
    if(stoi(k_rev) <= stoi(n)){
      v.push_back(k_rev);
    } else {
      break;
    }
  }
  cout << v.size() << endl;
  return 0;
}
