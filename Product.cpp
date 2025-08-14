#include <algorithm>
#include <cmath>
#include <iostream>
int main (int argc, char *argv[]) {
  long long int num1, num2;
    std::cin >> num1 >> num2;
  if(std::max(num1, num2) > pow(10, 15)){
    double r = log(num1) + log(num2);
    double rr= exp(r);
    std::cout << rr;
  }else{
    std::cout << num1 * num2;
  }

    
  return 0;
}
