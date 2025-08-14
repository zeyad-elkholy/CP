#include <iostream>
#include <ostream>
int main (int argc, char *argv[]) {
  int k, r, price=0;
  std::cin >> k >> r;
  while (true){
    price = price + k;
    if (price%10 == 0 ||price%10 == r) { break;}
  }
    std::cout << price/k;
    
  return 0;
}
