#include <iostream>
int main (int argc, char *argv[]) {
  int n, m;
  std::cin >> n ;
  for (int i = 0; i < n; ++i) {
    std::cin >> m;
    if (360%(180-m) == 0) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
  return 0;
}
