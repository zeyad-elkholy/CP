#include <algorithm>
#include <iostream>
int main (int argc, char *argv[]) {
  int a, b, gcd =0;
  std::cin >> a >> b;
  int max = std::min(a,b);
  for (int i = max; i >=0 ; --i){
    if (a % i == 0 && b % i == 0) {
      gcd = i;
      break;
    }
  }
  std::cout << gcd << std::endl;
  return 0;
}
