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

int n, m;

int main() {
  cin >> n >> m;
  if(n == 1){
    for (int i = 1; i <= m;i++) {
      cout << i << endl;
    }
  }
  if(n == 2){
  for (int i = 1; i <= m;i++) {
    for (int j = i + 1; j <= m;j++){
        cout << i << " " << j << endl;
    }
  }
  }
  if(n == 3) {
  for (int i = 1; i <= m;i++) {
    for (int j = i + 1; j <= m;j++){
      for (int k = j + 1; k <= m; k++){
        cout << i << " " << j << " " << k << endl;
      }
    }
  }
  }
  if(n == 4){
  for (int i = 1; i <= m;i++) {
    for (int j = i + 1; j <= m;j++){
      for (int k = j + 1; k <= m; k++){
        for (int l = k + 1; l <= m; l++){
          cout << i << " " << j << " " << k << " " << l << endl;
        }
      }
    }
  }
  }
  if(n == 5){
  for (int i = 1; i <= m;i++) {
    for (int j = i + 1; j <= m;j++){
      for (int k = j + 1; k <= m; k++){
        for (int l = k + 1; l <= m; l++){
          for (int o = l + 1; o <= m; o++){
            cout << i << " " << j << " " << k << " " << l << " " << o << endl;
          }
        }
      }
    }
  }
  }
  if(n == 6){
  for (int i = 1; i <= m;i++) {
    for (int j = i + 1; j <= m;j++){
      for (int k = j + 1; k <= m; k++){
        for (int l = k + 1; l <= m; l++){
          for (int o = l + 1; o <= m; o++){
            for (int p = o + 1; p <= m; p++){
              cout << i << " " << j << " " << k << " " << l << " " << o << " " << p << endl;
            }
          }
        }
      }
    }
  }
  }
  if(n == 7){
  for (int i = 1; i <= m;i++) {
    for (int j = i + 1; j <= m;j++){
      for (int k = j + 1; k <= m; k++){
        for (int l = k + 1; l <= m; l++){
          for (int o = l + 1; o <= m; o++){
            for (int p = o + 1; p <= m; p++){
              for (int y = p + 1; y <= m; y++){
              cout << i << " " << j << " " << k << " " << l << " " << o << " " << p << " " << y << endl;
              }
            }
          }
        }
      }
    }
  }
  }
  if(n == 8) {
  for (int i = 1; i <= m;i++) {
    for (int j = i + 1; j <= m;j++){
      for (int k = j + 1; k <= m; k++){
        for (int l = k + 1; l <= m; l++){
          for (int o = l + 1; o <= m; o++){
            for (int p = o + 1; p <= m; p++){
              for (int q = p + 1; q <= m; q++){
                for (int r = q + 1; r <= m; r++){
                  cout << i << " " << j << " " << k << " " << l << " " << o << " " << p << " " << q << " " << r << endl;
                }
              }
            }
          }
        }
      }
    }
  }
  }
  if(n == 9) {
  for (int i = 1; i <= m;i++) {
    for (int j = i + 1; j <= m;j++){
      for (int k = j + 1; k <= m; k++){
        for (int l = k + 1; l <= m; l++){
          for (int o = l + 1; o <= m; o++){
            for (int p = o + 1; p <= m; p++){
              for (int q = p + 1; q <= m; q++){
                for (int r = q + 1; r <= m; r++){
                  for (int s = r + 1; s <= m; s++){
                    cout << i << " " << j << " " << k << " " << l << " " << o << " " << p << " " << q << " " << r << " " << s << endl;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  }
  if(n == 10) {
  for (int i = 1; i <= m;i++) {
    for (int j = i + 1; j <= m;j++){
      for (int k = j + 1; k <= m; k++){
        for (int l = k + 1; l <= m; l++){
          for (int o = l + 1; o <= m; o++){
            for (int p = o + 1; p <= m; p++){
              for (int q = p + 1; q <= m; q++){
                for (int r = q + 1; r <= m; r++){
                  for (int s = r + 1; s <= m; s++){
                    for (int x = s + 1; x <= m; x++){
                    cout << i << " " << j << " " << k << " " << l << " " << o << " " << p << " " << q << " " << r << " " << s << " " << x << endl;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  }
  return 0;
}
