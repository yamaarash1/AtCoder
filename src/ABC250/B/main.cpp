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

int display(int n, int a, int b, bool is_w){
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < n;j++){
      for (int k = 0; k < b;k++){
        if(is_w){
          cout << ".";
        }else{
          cout << "#";
        }
      }
          if(n!=1){
      is_w = !is_w;
    } else {
      is_w = true;
    }
    }
    cout << endl;
  }
}

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  bool is_w = true;
  for (int i = 0; i < n;i++){
    display(n, a, b, is_w);
    if(n!=1){
      is_w = !is_w;
    } else {
      is_w = true;
    }
  }
  return 0;
}
