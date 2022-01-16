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
  for (int i = 1; i <= 100;i++){
    if (i % 15 == 0){
      cout << "Fizz Buzz" << endl;
    }else if(i%5==0){
      cout << "Buzz!" << endl;
    }else if(i%3==0){
      cout << "Fizz!" << endl;
    }
  }
  return 0;
}
