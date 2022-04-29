#include <stdlib.h>
 
#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
 
int main() {
    ll n, q, j, ans;
    cin >> n;
    ll a[n + 1];
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> q;
    ll l[q], r[q], x[q];
    rep(i, q) {
        cin >> l[i] >> r[i] >> x[i];
    }
    ll sum[n + 1][q];
    rep(i, q) {
        sum[0][i] = 0;
    }
    rep(i, q) {
        for(j = 1; j <= n; j++) {
            if(a[j] == x[i]) {
                sum[j][i] = sum[j - 1][i] + 1;
            } else {
                sum[j][i] = sum[j - 1][i];
            }
        }
    }
    rep(i, q) {
        ans = sum[r[i]][i] - sum[l[i] - 1][i];
        cout << ans << endl;
    }
}