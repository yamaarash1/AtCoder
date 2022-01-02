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
const int INF = 999999999;

void merge(int A[], int left, int mid, int right){
  int l = mid - left;
  int r = right - mid;
  int L[l+1];
  int R[r+1];
  for (int i = 0; i < l; i++)
  {
    L[i] = A[left+i];
  }

  for (int i = 0; i < r; i++)
  {
    R[i] = A[mid+i];
  }
  L[l] = INF;
  R[r] = INF;

  int l_o = 0;
  int r_o = 0;
  for (int i = left; i < right; i++)
  {
    if(L[l_o] > R[r_o]){
      A[i] = R[r_o];
      r_o++;
    }else{
      A[i] = L[l_o];
      l_o++;
    }
  }
  return;
}
void merge_sort(int A[], int left, int right){
  if(left + 1 < right){
    int mid = (left + right) / 2;
    merge_sort(A, left, mid);
    merge_sort(A, mid, right);
    merge(A, left, mid, right);
  }
  return;
}

int main(){
  int n = 8;
  int A[8] = {4, 1, 2, 6, 9, 7, 3, 5};
  merge_sort(A, 0, n);
  for (int i = 0; i < n; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
  return 0;
}
