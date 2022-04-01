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
	int a[n+1], b[m+1], c[n+m+1];
	for (int i = 0; i <= n; i++){
    cin >> a[i];
  }
	for (int i = 0; i <= n+m; i++) {
    cin >> c[i];
  }
	for (int i = m; i >= 0; i--) {
		b[i] = c[i + n] / a[n];
		for (int j = 0; j <= n; j++){
      c[i + j] = c[i+j] - (b[i] * a[j]);
    }
	}
	for (int i = 0; i < m; i++){
    cout << b[i] << " ";
  }
	cout << b[m] << endl;
  return 0; 
}
