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

vector<int> numbers;
int a, b;
void safety()
{
  auto itr = numbers.begin();
  while (itr != numbers.end())
  {
    if(((*itr) == a) || ((*itr) == b))
    {
        itr = numbers.erase(itr);
    }
    else
    {
        itr++;
    }
}
}