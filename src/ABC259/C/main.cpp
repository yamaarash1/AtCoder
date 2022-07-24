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
  if(s.length() > t.length()){
    cout << "No" << endl;
    return 0;
  }
  vector<pair<char,int>> vs;
  vector<pair<char,int>> vt;
  int s_count = 0;
  int char_count = 0;
  char s_target = s[0];
  while (s_count <= s.length())
  {
    if(s_target == s[s_count]){
      char_count++;
      s_count++;
    }
    else
    {
      vs.push_back({s_target, char_count});
      s_target = s[s_count];
      char_count = 1;
      s_count++;
    }
  }
  int t_count = 0;
  int t_char_count = 0;
  char t_target = t[0];
  while (t_count <= t.length())
  {
    if(t_target == t[t_count]){
      t_char_count++;
      t_count++;
    }
    else
    {
      vt.push_back({t_target, t_char_count});
      t_target = t[t_count];
      t_char_count = 1;
      t_count++;
    }
  }
  //サイズが違うと異なる文字順序と文字列で構成されるのでアウト
  if(vs.size() != vt.size()) {
    cout << "No" << endl;
    return 0;
  }
  for (int i = 0; i < vs.size(); i++)
  {
    //文字異なる場合アウト
    if(vs[i].first != vt[i].first) {
      cout << "No" << endl;
      return 0;
    }
    //文字が同じで数も一緒なら次へ
    if(vs[i].second == vt[i].second) {
      continue;
    }
    //文字が同じでも、連続してなかったら挿入できないのでアウト
    if(vs[i].second <= 1){
      cout << "No" << endl;
      return 0;
    }
    if(vs[i].second < vt[i].second){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
