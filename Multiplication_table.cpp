#include "iostream"
int main (int argc, char *argv[]) {
  int n;
  std::cin >> n;
  for (int i = 1; i <= 12; i++) {
    std::cout << n << " * " << i << " = " << n * i << std::endl;
  }
  return 0;
}
