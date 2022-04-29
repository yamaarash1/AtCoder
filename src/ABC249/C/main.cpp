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
  int n, k;
  cin >> n >> k;
  string s[n];
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }
  int limit = pow(2, n);
  int ans = 0;
  for (int i = 0; i < limit; i++)
  {
    map<char, int> count;
    int tmp = 0;
    for (int j = 0; j < n; j++)
    {
      if(1 & (i>>j)) {
        for (int k = 0; k < s[j].length(); k++){
          count[s[j][k]]++;
        }
      }
    }
    char x = 'a';
    while(x <= 'z')
    {
      if (count[x] == k)
      {
        tmp++;
      }
      x++;
    }
    if(tmp > ans){
      ans = tmp;
    }
    count.clear();
  }
  cout << ans << endl;
  return 0;
}
