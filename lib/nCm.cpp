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

int nCm(int n, int m){
  int ans = 1;
  for (int i = 0; i < m; i++)
  {
    ans *= n - i;
  }
  for (int i = m; i > 1; i--)
  {
    ans /= i;
  }
  return ans;
}