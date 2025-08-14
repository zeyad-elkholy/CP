#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <iostream>
bool change;
bool ordered= true;
int n, m, k;
std::vector<int> a,b;
void solve(){
  std::cin >> n;
  for (int i =0; i<n ; ++i) {
    std::cin >> m >> k;
    if (m != k) {
      change = true;

      return;
    }
    a.push_back(m);
    b.push_back(m);
  }
  std::sort(a.begin(), a.end(), std::greater_equal<int>());

  ordered = std::equal(a.begin(), a.end(), b.begin(), b.end());
}
int main (int argc, char *argv[]) {
  solve();
  if (change) {
    std::cout << "rated";
  }else if (!ordered) {
    std::cout << "unrated";
  }else {
    std::cout << "maybe";
  }
  return 0;
}
