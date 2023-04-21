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
  int n;
  cin >> n;
  char cell[n][n];
  for (int i = 0; i < n;i++){
    string s;
    cin >> s;
    for (int j = 0; j < n;j++){
      cell[i][j] = s[j];
    }
  }
  for (int i = 0; i <= n - 6; i++) {
    for (int j = 0; j <= n - 6; j++) {
      int b_lean = 0;
      for (int k = 0; k < 6; k++) {
        if(cell[i + k][j + k] == '#') {
          b_lean++;
        }
      }
      if(b_lean >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  for (int i = 0; i <= n - 6; i++) {
    for (int j = 0; j < n; j++) {
      int b_down = 0;
      for (int k = 0; k < 6; k++) {
        if(cell[i + k][j] == '#') {
          b_down++;
        }
      }
      if(b_down >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= n - 6; j++) {
      int b_right = 0;
      for (int k = 0; k < 6; k++) {
        if(cell[i][j + k] == '#') {
          b_right++;
        }
      }
      if(b_right >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  for (int i = 5; i < n; i++) {
    for (int j = 0; j <= n - 6; j++) {
      int b_lean = 0;
      for (int k = 0; k < 6; k++) {
        if(cell[i - k][j + k] == '#') {
          b_lean++;
        }
      }
      if(b_lean >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }  
  cout << "No" << endl;
  return 0;
}
