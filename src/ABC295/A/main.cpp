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
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

int main() {
  string ok[5];
  ok[0] = "and";
  ok[1] = "not";
  ok[2] = "that";
  ok[3] = "the";
  ok[4] = "you";
  int n;
  cin >> n;
  string w[n];
  for (int i = 0; i < n;i++){
    cin >> w[i];
  }
  for (int i = 0; i < n;i++){
    for (int j = 0; j < 5;j++){
      if(w[i]==ok[j]){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
    return 0;
}
