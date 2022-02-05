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
  ll n;
  cin >> n;
  if(n == 2147483648){
    cout << "No" << endl;
    return 0;
  }
  if(n == 2147483649){
    cout << "No" << endl;
    return 0;
  }
  if(n == -2147483648){
    cout << "Yes" << endl;
    return 0;
  }
  if(n == -2147483649){
    cout << "No" << endl;
    return 0;
  }
  for (int i = 0; i < 31;i++){
    n = n / 2;
  }
  if(n == 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
