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
  int n, m;
  cin >> n >> m;
  string eki_name[n];
  map<string, bool> eki;
  for (int i = 0; i < n;i++){
    string s;
    cin >> s;
    eki_name[i] = s;    
    eki[s] = false;
  }
  for (int i = 0; i < m;i++){
    string m;
    cin >> m;
    eki[m] = true;
  }
  for (int i = 0; i < n;i++){
    if (eki[eki_name[i]])
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
  return 0;
}
