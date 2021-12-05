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
#define rep(i, n) for (long long int i = 0; i < (long long int)(n); i++)

long long int gcd(long long int a, long long int b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}
int main() {
  long long int a, b, c;
  cin >> a >> b >> c;
  long long int gcd_res = gcd(a, b);
  gcd_res = gcd(c, gcd_res);
  cout << gcd_res << endl;
  long long int a_num = (a / gcd_res) - 1;
  long long int b_num = (b / gcd_res) - 1;
  long long int c_num = (c / gcd_res) - 1;
  long long int res = a_num + b_num  + c_num;
  cout << res << endl;
  return 0;
}
