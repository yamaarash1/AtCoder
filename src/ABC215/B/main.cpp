#include <iostream>
#include <cstring>
#include <cstdio>
#include<algorithm>
#include <queue>
#include <cmath>
#include <limits>
#include <map>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() { 
  long long int N;
  cin >> N;
  long long val = 1;
  for (long long int i = 0; i <= 60; i++) {
    if(val>N){
      cout << i - 1 << endl;
      break;
    }
    val = val * 2;
  }
  return 0;
}
