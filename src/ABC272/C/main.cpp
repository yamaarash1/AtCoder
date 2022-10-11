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
  vector<int> odd;
  vector<int> even;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if(a%2==0){
      even.push_back(a);
    } else {
      odd.push_back(a);
    }
  }
  sort(odd.begin(), odd.end(), greater<int>());
  sort(even.begin(), even.end(), greater<int>());
  int ans;
  if (odd.size() <= 1 && even.size() <= 1)
  {
    cout << -1 << endl;
    return 0;
  }
  if(odd.size() <= 1){
    ans = even[0] + even[1];
    cout << ans << endl;
    return 0;
  }
  if(even.size() <= 1){
    ans = odd[0] + odd[1];
    cout << ans << endl;
    return 0;
  }
  int odd_sum = odd[0] + odd[1];
  int even_sum = even[0] + even[1];
  ans = max(odd_sum, even_sum);
  cout << ans << endl;
  return 0;
}
