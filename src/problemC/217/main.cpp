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

int main() { 
  int n;
  cin >> n;
  int p[n+1];
  for (int i = 1; i <= n;i++){
    cin >> p[i];
  }
  int q[n+1];
  for (int i = 1; i <= n;i++){
    q[p[i]] = i;
  }
  for (int i = 1; i <= n;i++){
    cout << q[i] << " ";
  }
  cout << endl;
  return 0;
}
