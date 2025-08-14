#include <iostream>
#include <ostream>
int main (int argc, char *argv[]) {
  int n;
  std::cin >> n;
  if (n < 2) {
    std::cout << -1 << std::endl;
    return 0;
  }
  for (int i = 2; i <= n; ++i) {
    if (i%2 == 0) {
      std::cout << i << std::endl;
    
    }
  }
  return 0;
}
