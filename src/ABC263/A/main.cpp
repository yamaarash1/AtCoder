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
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  int arr[5];
  arr[0] = a;
  arr[1] = b;
  arr[2] = c;
  arr[3] = d;
  arr[4] = e;
  sort(arr, arr+5);
  if(arr[0] == arr[1] && arr[1] == arr[2] && arr[3] == arr[4]){
    cout << "Yes" << endl;
  } else if(arr[0] == arr[1] && arr[2] == arr[3] && arr[3] == arr[4]){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
