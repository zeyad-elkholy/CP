#include <iostream>
#include <vector>
int main (int argc, char *argv[]) {
std::vector<int> primes; 
    int n;
    std::cin >> n;
    for (int j = 2; j <= n; ++j){
    bool is_prime = true;
    for (int i = 2; i * i <= j; ++i) {
        if (j % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime) 
        primes.push_back(j);
    }
    for (int prime : primes) {
        std::cout << prime << " ";
    }
  return 0;
}
