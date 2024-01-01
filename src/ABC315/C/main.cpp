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
#include <stack>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repab(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define reprab(i, a, b) for (int i = (int)(a); i >= (int)(b); i--)
#define repabc(i, a, b, c) for (int i = (int)(a); int (b) < (int)(c); i++)
#define all(a)  (a).begin(),(a).end()
#define allr(a)  (a).rbegin(),(a).rend()
#define in(x) cin >> x
#define in2(x, y) cin >> x >> y
#define in3(x, y, z) cin >> x >> y >> z
#define outl(x) cout << x << endl
#define outl2(x, y) cout << x << " " << y << endl
#define outl3(x, y, z) cout << x << " " << y << " " << z << endl
#define out(x) cout << x
#define out2(x, y) cout << x << " " << y
#define out3(x, y, z) cout << x << " " << y << " " << z
#define YesNo(flag) cout << (flag ? "Yes" : "No") << endl
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
typedef long long ll;


int main() { 
  int n;
  in(n);
  vector<pair<int,int>> fs;
  int max_f = 0;
  int max_s = 0;
  rep(i,n) {
    int f,s;
    in2(f,s);
    fs.push_back(make_pair(f,s));
    if(max_s < s) {
      max_s = s;
      max_f = f;
    }
  }

  //異なる時の最大値
  map<int, int> max_m;
  rep(i,n) {
    if(max_m[fs[i].first] < fs[i].second) {
      max_m[fs[i].first] = fs[i].second;
    }
  }
  vector<int> list;
  for(auto x: max_m) {
    list.push_back(x.second);
  }
  sort(all(list));
  int ans_1 = list[list.size()-1] + list[list.size()-2];

  //同じの時の最大値
  vector<int> max_f_list;
  rep(i,n) {
    if(max_f == fs[i].first) {
      max_f_list.push_back(fs[i].second);
    }
  }
  //for(auto x: max_f_list) {
  //  outl(x);
  //}
  int ans_2 = 0;
  if(max_f_list.size() > 1) {
    sort(max_f_list.begin(), max_f_list.end());
    ans_2 = max_f_list[max_f_list.size()-1] + max_f_list[max_f_list.size()-2] / 2;
  }

  //outl2(ans_1, ans_2);
  int ans = max(ans_1, ans_2);
  outl(ans);
  return 0; 
}
