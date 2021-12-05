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
  int N, K;
  cin >> N >> K;
  int point[N];
  int df_point[N];
  for (int i = 0; i < N; i++) {
    int P1, P2, P3;
    cin >> P1 >> P2 >> P3;
    point[i] = P1 + P2 + P3;
    df_point[i] = P1 + P2 + P3;
  }
  sort(point, point + N, greater<int>());
  for (int i = 0; i < N; i++) {
    int tg = df_point[i] + 300;
    if(point[K-1] <= tg){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
  return 0;
}
