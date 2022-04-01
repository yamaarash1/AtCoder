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

bool solution(int nums[])
{
  int n = 4;
  sort(nums, nums + n);
  int len = n;
  int desc[len];
  int asc[len];
  desc[len - 1] = nums[len - 1];
  asc[0] = nums[0];

  for (int i = 1; i < len; i++)
  {
    asc[i] = asc[i-1] + nums[i];
  }
  for (int i = len-2; i >= 0; i--)
  {
    desc[i] = desc[i+1] + nums[i];
  }

  bool ans = false;
  for (int i = 0; i < len; i++)
  {
    for (int j = 0; i >= 0; i--){
      if(asc[i] == desc[j]){
        ans = true;
      }
    }
  }
  return ans;
}

int main() {
  int nums[4] = {1, 5, 7, 1};
  cout << "run!!!!";
  bool ans = solution(nums);
  cout << ans << endl;
  return 0;
}
