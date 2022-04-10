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
  int n;
  map<string, int> name;
  cin >> n;
  string s[n], t[n];
  for (int i = 0; i < n; i++)
  {
    cin >> s[i] >> t[i];
  }
  for (int i = 0; i < n;i++){
    if(s[i] == t[i]){
      name[s[i]]++;
      continue;
    }
    name[s[i]]++;
    name[t[i]]++;
  }

  //for (auto i = name.begin(); i != name.end() ; ++i){
  //  cout << i->first << " " << i->second << endl;
  //}

  for (int i = 0; i < n;i++){
    if(name[s[i]] == 1)
      continue;
    if(name[t[i]] == 1)
      continue;
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;

  return 0;
}
