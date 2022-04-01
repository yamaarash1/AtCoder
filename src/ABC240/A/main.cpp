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
  int a, b;
  cin >> a >> b;
  if (b < a)
  {
    swap(a, b);
  }
  if(a+1==b){
    cout << "Yes" << endl;
  }else if(a==1 &&b==10){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
