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
  char s1, s2, s3;
  char t1, t2, t3;
  cin >> s1 >> s2 >> s3 >> t1 >> t2 >> t3;
  int ans = 0;
  if (s1 != t1)
  {
    ans++;
  }
  if (s2 != t2)
  {
    ans++;
  }
    if (s3 != t3)
  {
    ans++;
  }
  if(ans == 0 || ans == 3){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
