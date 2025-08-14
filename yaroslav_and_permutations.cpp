#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
signed main () {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  for (int i = 0; i < n; i++) {
    int c = 0;
    for (int j = 0 ; j < n; j++) {
      if (v[j] == v[i]) {
        ++c;
      }
    }
    if (n < 2*c-1){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
