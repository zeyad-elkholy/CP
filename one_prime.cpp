#include <iostream>
int main (int argc, char *argv[]) {
    int n;
    std::cin >> n;

    if (n < 2) {
        std::cout << "NO" << std::endl;
        return 0;
    }

    bool is_prime = true;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
  return 0;
}
