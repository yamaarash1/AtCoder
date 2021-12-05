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

ll T[200009];
ll K[200009];
vector<int>A[200009];
bool pass[200009];

int main() {
  int N, x;
	for(int i = 0;i<200009;i++) pass[i] = false;
	cin >> N;
	for (int i = 1; i <= N;i++){
		cin >> T[i] >> K[i];
		for (int j = 0; j < K[i]; j++){
			cin >> x;
			A[i].push_back(x);
		}
	}
  ll time = 0;
  pass[N] = true;
  for (int i = N; i > 0;i--) {
    if (pass[i] == true) {
      for (int j = 0; j < A[i].size(); j++){
          pass[A[i][j]] = true;   
      }
      time += T[i];
    }
  }
  cout << time << endl;
  return 0;
}
