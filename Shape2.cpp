#include <iostream>
int main (int argc, char *argv[]) {
  int n;
  std::cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int x = 1; x <= n-i; x++) {
      std::cout << " ";
    }
    for (int j = 1; j <= 2*i-1; j++) {
        std::cout << "*";
    }
    std::cout << std::endl;
  }

  return 0;
}
