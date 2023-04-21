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
  int h1, w1;
  cin >> h1 >> w1;
  int a[15][15], b[15][15];
  for(int i = 0; i < h1; i++) {
    for(int j = 0; j < w1; j++) {
      cin >> a[i][j];
    }
  }
  int h2, w2;
  cin >> h2 >> w2;
  for(int i = 0; i < h2; i++) {
    for(int j = 0; j < w2; j++) {
      cin >> b[i][j];
    }
  }
  for (int h_b = 0; h_b < (1<<h1); h_b++) {
    for (int w_b = 0; w_b < (1<<w1); w_b++) {
      vector<int> H;
      vector<int> W;
      for (int i = 0; i < h1; ++i)
      {
        if (h_b & (1 << i))
        {
          H.push_back(i);
        }
      }
      for (int i = 0; i < w1; ++i)
      {
        if (w_b & (1 << i))
        {
          W.push_back(i);
        }
      }
      if(H.size() != h2) continue;
      if(W.size() != w2) continue;
      bool ok = true;
      for (int i = 0; i < h2; i++) {
        for (int j = 0; j < w2; j++) {
          if(a[H[i]][W[j]] != b[i][j]) {
            ok = false;
            break;
          };
        }
      }
      if(ok) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
