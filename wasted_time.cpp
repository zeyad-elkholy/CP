#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
std::vector<std::pair<double , double >> v(100);
long double n,k;
double ans = 0;
void solve() {
  std::cin >> n >> k;
  for (int i = 0; i < n; i++) {
    std::cin >> v[i].first >> v[i].second;
  }
  for (int i = 0; i < n-1; i++) {
        ans += sqrt((v[i].first - v[i+1].first) * (v[i].first - v[i+1].first) + (v[i].second - v[i+1].second) * (v[i].second - v[i+1].second));
  }
  std::cout << std::fixed << std::setprecision(9)<< (ans*k) /(double) 50 << std::endl;
}
int main (int argc, char *argv[]) {
  solve();
  return 0;
}
