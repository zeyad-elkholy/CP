#include <iostream>
typedef long long ll;
int main (int argc, char *argv[]) {
  int n;
  std::cin >> n;
  ll e, o, p, ne, thenum;
  e = o = p = ne = 0;

  for (int i = 0; i < n; ++i) {
    std::cin >> thenum;
    if (thenum% 2 == 0) {
      e++;
    } else {
      o++;
    }
    
    if (thenum> 0) {
      p++;
    } else if (thenum< 0) {
      ne++;
    }
  }
  std::cout << "Even: " << e << "\n";
  std::cout << "Odd: " << o << "\n";
  std::cout << "Positive: " << p << "\n";
  std::cout << "Negative: " << ne << "\n";
  return 0;
}
