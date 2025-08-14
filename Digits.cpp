#include <iostream>
int main (int argc, char *argv[]) {
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    long long b;
    std::cin >> b;
    if(b ==0) {
      std::cout << "0" << std::endl;
      continue;
    }
    while (b > 0) {
      long long c = b%10;
      std::cout << c << " ";
      b /= 10;
    }
    std::cout << std::endl;
  }
  return 0;
}
