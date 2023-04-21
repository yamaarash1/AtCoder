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

int n,k;
int a[200009], b[200009];
int ok = false;
void dfs(int x, int cnt)
{
  if(cnt == n - 1) {
    ok = true;
    return;
  }
  if(abs(x - a[cnt+1]) <= k) {
    dfs(a[cnt+1], cnt+1);
  }
  if(abs(x - b[cnt+1]) <= k) {
    dfs(b[cnt+1], cnt+1);
  }
  return;
}
int main() { 
  cin >> n >> k;
  for (int i = 0; i < n;i++){
    cin >> a[i];
  }
  for (int i = 0; i < n;i++){
    cin >> b[i];
  }
  dfs(a[0], 0);
  dfs(b[0], 0);
  if(ok) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
