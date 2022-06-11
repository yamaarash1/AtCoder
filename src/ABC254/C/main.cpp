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
	int n,k;
	cin>>n>>k;
  vector<int> a;
  vector<vector<int>> b(k);
  for (int i = 0; i < n; i++)
  {
    int x;
    a.push_back(x);
    b[i % k].push_back(a[i]);
  }
  sort(a.begin(), a.end());
  for(int i=0;i<k;i++){
		sort(b[i].rbegin(),b[i].rend());
	}
	vector<int> na;
	for(int i=0;i<n;i++){
		na.push_back(b[i%k].back());
		b[i%k].pop_back();
	}
	if(a==na)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
  return 0;
}
