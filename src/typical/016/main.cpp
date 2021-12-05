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
using namespace std;
#define rep(i, n) for (long long int i = 0; i < (long long int)(n); i++)
long long int A, B, C, N;
long long int i, j, res;

int main() {
  long long int ans = 9999;
  cin >> N >> A >> B >> C;
  for (i = 0; i < 9999;i++){
    for (j = 0; j < 9999;j++){
      long long int X = N - A * i - B * j; //割った結果
      long long int Y = i + j + X / C; //実際の枚数
      if (X % C != 0 || X < 0 || Y > 9999) continue;
      ans = min(ans, Y);
    }
  }
  cout << ans << endl;
  return 0;
}
