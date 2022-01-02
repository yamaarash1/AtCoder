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

int partition(int A[], int left, int right){
  int mid = (left + right) / 2;
  int pivot = A[mid];
  A[mid] = A[left];
  int p = left;
  for (int i = left + 1; i <= right; i++)
  {
    if(A[i]<pivot){
      p++;
      swap(A[i], A[p]);
    }
  }
  swap(A[left], A[p]);
  A[p] = pivot;
  return p;
}

void quick_sort(int A[], int left, int right){
  if(left < right){
    int q = partition(A, left, right);
    quick_sort(A, left, q-1);
    quick_sort(A, q+1, right);
  }
  return;
}

int main(){
  //int n;
  //cin >> n;
  //int A[n];
  //for (int i = 0; i < n;i++){
  //  cin >> A[i];
  //}
  int n = 8;
  int A[8] = {4, 1, 2, 6, 9, 7, 3, 5};
  quick_sort(A, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
  return 0;
}
