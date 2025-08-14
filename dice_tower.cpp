#include <iostream>
int main (int argc, char *argv[]) {
  int n, z, x, y;
  std::cin >> n >> z;
  for (int i = 0; i < n; ++i) {
    std::cin >> x >> y;
    if (x == z || y == z || x == 7 - z || y == 7 - z) {
      std::cout << "NO" << std::endl;
      return 0;
    }
  }
    std::cout << "YES" << std::endl;
    return 0;
  return 0;
}
