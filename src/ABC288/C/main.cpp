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
int n, m;
int a, b;
vector<vector<int>> g(200000);
map<int, bool> pass;
int ans = 0;

class UnionFind {
public:
    // 親の番号を格納する。親だった場合は-(その集合のサイズ)
    vector<int> Parent;

    UnionFind(int N) {
        Parent = vector<int>(N, -1);
    }

    // Aがどのグループに属しているか調べる
    int root(int A) {
        if (Parent[A] < 0) return A;
        return Parent[A] = root(Parent[A]);
    }

    // 自分のいるグループの頂点数を調べる
    int size(int A) {
        return -Parent[root(A)];//親をとってきたい]
    }

    // AとBをくっ付ける
    bool connect(int A, int B) {
        // AとBを直接つなぐのではなく、root(A)にroot(B)をくっつける
        A = root(A);
        B = root(B);
        if (A == B) {
            //すでにくっついてるからくっ付けない
            return false;
        }

        // 大きい方(A)に小さいほう(B)をくっ付ける
        // 大小が逆だったらひっくり返す
        if (size(A) < size(B)) {
            swap(A, B);
        }

        // Aのサイズを更新する
        Parent[A] += Parent[B];
        // Bの親をAに変更する
        Parent[B] = A;

        return true;
    }
};

int main() {
  cin >> n >> m;
  UnionFind uni(n+1);
  int ans = 0;
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    //cout << a << "," << b << ": " << uni.root(a) << " " << uni.root(b) << endl;
    if (uni.root(a) == uni.root(b))
    {
            ans++;
    }
    uni.connect(a, b);
  }
  cout << ans << endl;
  return 0;
}
