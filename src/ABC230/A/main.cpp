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
  int N;
  cin >> N;
  if (N >= 42) N += 1;
  if(N>=10){
    cout << "AGC0" << N << endl;
    return 0;
  }
  cout << "AGC00" << N << endl;
  return 0;
}
