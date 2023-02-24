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
  string s, t;
  cin >> s >> t;
  vector<string> cand;
  for (int i = 0; i <= t.length();i++){
    string s_1 = s.substr(0, i) + s.substr((s.length() - 1) - (t.length() - i) + 1, (t.length() - i));
    cand.push_back(s_1);
  }
  vector<int> del;
  for (int i = 0; i < s.length(); i++)
  {
    if(s[i] == '?'){
      del.push_back(i);
      t.erase(i, 1);
    }
  }
  for(auto o : del){
    for (int i = 0; i < cand.size();i++){
      cand[i].replace(o, 1, "");
    }
  }
  string hate = "";
  for (int i = 0; i < t.length(); i++)
  {
    hate += "?";
  }
    for (int i = 0; i < cand.size(); i++)
    {
      if (cand[i] == t || t == hate)
      {
        cout << "Yes" << endl;
      } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
