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
  int p[n],p_s[n];
  bool p_e[n+1];
  for (int i = 0; i < n; i++){
    cin >> p[i];
  }
  for (int i = 0; i <= n; i++){
    p_e[i] = false;
  }
  for (int i = 0; i < k; i++){
    p_e[p[i]] = true;
  }
  for (int i = 0; i <= n;i++){
  }
    // int m;
    // int o = 0;
    // while(!p_e[p_s[o]]){
    //   o++;
    // }
    // m = p_s[o];
    // cout << m << endl;
    // for (int i = k; i < n; i++)
    //{
    //   p_e[p[i]] = true;
    //   if(p[i] > m){
    //     o++;
    //     while(!p_e[p_s[o]]){
    //       o++;
    //     }
    //     m = p_s[o];
    //   }
    //   cout << m << endl;
    // }
    return 0;
}
