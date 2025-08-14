#include <iostream>
int main (int argc, char *argv[]) {
  int t;
  for (std::cin >> t; t > 0; --t) {
    int n;
    std::cin >> n;
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
      result *= i;
    }
    std::cout << result << std::endl;
  }
  return 0;
}
