#include <iostream>
int main (int argc, char *argv[]) {
  int n;
  std::cin >> n;
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) {
      std::cout << i <<std::endl;
    }
  }
  return 0;
}
