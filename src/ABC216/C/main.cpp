#include <iostream>
#include <cstring>
#include <cstdio>
#include<algorithm>
#include <queue>
#include <cmath>
#include <limits>
#include <map>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long int N;
  cin >> N;
  string res = "";
  while (N > 0) {
    if(N%2==0){
      res = 'B' + res;
      N = N / 2;
    }else{
      res = 'A' + res;
      N = N - 1;
    }
  }
  cout << res << endl;
  return 0;
}
