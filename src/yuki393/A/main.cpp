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
#include <stack>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

int main() { 
  int x;
  cin >>x;
  if(x==1||x==2||x==12){
    cout << "winter" << endl;
  } else if(x==3||x==4||x==5) {
    cout <<"spring"<<endl;
  } else if(x==6||x==7||x==8) {
    cout << "summer" << endl;
  } else {
    cout << "fall" << endl;
  }
  return 0;
  return 0; 
}
