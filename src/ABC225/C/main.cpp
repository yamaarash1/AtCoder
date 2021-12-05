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

int main() {
  int N, M;
  cin >> N >> M;
  int B[N][M];

  for (int i = 0; i < N;i++){
    for (int j = 0; j < M;j++){
      cin >> B[i][j];
    }
  }

  //一番左端の情報を取得
  int week = 0;
  int day = B[0][0];
  for (int i = 0; i < N; i++) {
    day = B[0][0] + week; //正しい日付
    int limit = (day / 7) + 1;
    if (day % 7 == 0) limit -= 1;
    limit = limit * 7;
    for (int j = 0; j < M; j++) {
      int check = B[i][j] / 7;
      //cout << limit << " " << day << endl;
      //cout << day << " " << B[i][j] << endl;
      if (B[i][j] != day || limit < day) {
        cout << "No" << endl;
        return 0;
      }
      day++;
    }
    week += 7;
  }
  cout << "Yes" << endl;
  return 0;
}
