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
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

int main() { 
  string s,t;
  cin >> s >> t;
  vector<pair<char, int>> s_v;
  vector<pair<char, int>> t_v;

  if(s.length() > t.length()){
    cout << "No" << endl;
    return 0;
  }
  if(s.length() == t.length()){
    if(s == t){
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  char f = s[0];
  s_v.push_back({s[0], 1});
  for (int i = 1; i < s.length(); i++)
  {
    if(f != s[i]){
      s_v.push_back({s[i], 1});
    } else {
      s_v[s_v.size()-1].second++;
    }
    f = s[i];
  }
  f = t[0];
  t_v.push_back({t[0], 1});
  for (int i = 1; i < t.length(); i++)
  {
    if(f != t[i]){
      t_v.push_back({t[i], 1});
    } else {
      t_v[t_v.size()-1].second++;
    }
    f = t[i];
  }
  for(auto x : s_v){
    cout << x.first << " " << x.second << endl;
  }
  cout << "----" << endl;
  for(auto x : t_v){
    cout << x.first << " " << x.second << endl;
  }
  if(s_v.size() != t_v.size()){
    cout << "No" << endl;
    return 0;
  }
  for (int i = 0; i < s_v.size(); i++) {
    if(s_v[i].first != t_v[i].first){
      cout << "No" << endl;
      return 0;
    }
    if(s_v[i].second > t_v[i].second){
      cout << "No" << endl;
      return 0;
    }
    if(s_v[i].second == 1 && t_v[i].second == 1){
      continue;
    }
    if(s_v[i].second == 1 && t_v[i].second > 1){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
