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
  string s, t;
  cin >> s >> t;
  if(s.length() > t.length()) {
    cout << "No" << endl;
    return 0;
  }
  vector<pair<char, int>> s_a, t_a;
  char s_f = s[0];
  int count = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if(s_f == s[i]) {
      count++;
    } else {
      s_a.push_back({s_f, count});
      s_f = s[i];
      count = 1;
    }
    if(s.length() - 1 == i) {
      s_a.push_back({s_f, count});
    }
  }
  char t_f = t[0];
  count = 0;
  for (int i = 0; i < t.length(); i++)
  {
    if(t_f == t[i]) {
      count++;
    } else {
      t_a.push_back({t_f, count});
      t_f = t[i];
      count = 1;
    }
    if(t.length() - 1 == i) {
      t_a.push_back({t_f, count});
    }
  }
  //for(auto x : s_a) {
  //  cout << x.first << ": " << x.second << endl;
  //}
  //cout << "----" << endl;
  //for (auto x : t_a)
  //{
  //  cout << x.first << ": " << x.second << endl;
  //}
  if(s_a.size() != t_a.size()) {
    cout << "No" << endl;
    return 0;
  }
  for(int i = 0;i<s_a.size();i++){
    if(s_a[i].first != t_a[i].first) {
      cout << "No" << endl;
      return 0;
    }
    if(s_a[i].second > t_a[i].second) {
      cout << "No" << endl;
      return 0;
    }
    if(s_a[i].second <= 1 && t_a[i].second >= 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
