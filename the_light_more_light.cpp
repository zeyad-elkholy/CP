#include <cmath>
#include <iostream>
#include <ostream>
int main (int argc, char *argv[]) {
  long num = -1;
  while (true) {
    if (num ==0) {
      break;
      
    }
    std::cin >> num;
    long in = static_cast<int>(std::sqrt(num));
     if (in*in == num) {
       std::cout << "yes" << std::endl;
      
     }else {
       std::cout << "no" << std::endl;
     }
  }
  return 0;
}
