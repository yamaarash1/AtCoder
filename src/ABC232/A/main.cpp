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
    string S;
  cin >> S;
  int a = S[0] - '0';
  int b = S[2] - '0';
  cout << a * b << endl;
  return 0; 
}
