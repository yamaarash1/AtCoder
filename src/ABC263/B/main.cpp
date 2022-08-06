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
int n;
int p[10000];
int ans = 1;
void check(int child)
{
  if(child == 1){
    return;
  }
  ans++;
  check(p[child]);
}

int main() {
  cin >> n;
  p[0] = 0;
  p[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    cin >> p[i];
  }
  check(p[n]);
  cout << ans << endl;
  return 0;
}
