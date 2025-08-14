#include <algorithm>
#include <iostream>
#include <vector>
int t,n;
long long bruh1, bruh2, bruh3, bruh4;
std::vector<long long> x1a, x2a, y1a, y2a;
long long overlapping(){
    auto x1 = std::max_element(x1a.begin(), x1a.end());
    auto y1 = std::max_element(y1a.begin(), y1a.end());
    auto x2 = std::min_element(x2a.begin(), x2a.end());
    auto y2 = std::min_element(y2a.begin(), y2a.end());
    return (*x2-*x1) * (*y2-*y1);
}
void solve(){
  std::cin >> t;
  int testcase = 1;
  while (t--) {
    std::cin >> n;
    x1a.clear();
    x2a.clear();
    y1a.clear();
    y2a.clear();
    for (int i = 0 ; i < n ; ++i) {
      std::cin >> bruh1 >> bruh2 >> bruh3 >> bruh4;
      x1a.push_back(bruh1);
      y1a.push_back(bruh2);
      x2a.push_back(bruh3);
      y2a.push_back(bruh4);
    }
    std::cout << "Case #" << testcase << ": " << overlapping() << "\n";
    testcase++;
  }
}
int main (int argc, char *argv[]) {
  solve();
  return 0;
}
