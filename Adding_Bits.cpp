#include <iostream>
int main (int argc, char *argv[]) {
    int a, b;
    std::cin >> a >> b;

    // Calculate the sum of the two integers
    int sum = a ^ b;

    // Output the result
    std::cout <<sum << std::endl;
  return 0;
}
