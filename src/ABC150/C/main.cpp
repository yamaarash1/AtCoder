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

int main() {
  int n;
  cin >> n;
  int p[n], q[n];
  int tmp[n];
  for (int i = 0; i < n;i++){
    cin >> p[i];
  }
  for (int i = 0; i < n;i++){
    cin >> q[i];
  }
  for (int i = 0; i < n;i++){
    tmp[i] = i + 1;
  }
  int a, b;
  int count = 1;
  do
  {
    bool is_a = true;
    for (int i = 0; i < n; i++)
    {
      if(p[i] != tmp[i]) {
        is_a = false;
        break;
      }
    }
    if(is_a) {
      a = count;
    }

    bool is_b = true;
    for (int i = 0; i < n; i++)
    {
      if(q[i] != tmp[i]) {
        is_b = false;
        break;
      }
    }
    if(is_b) {
      b = count;
    }

    count++;
  } while (next_permutation(tmp, tmp + n));

  cout << abs(a - b) << endl;
  return 0;
}
