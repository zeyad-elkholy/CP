#include <iostream>
#include <ostream>
int main (int argc, char *argv[]) {
  int n, m, c;
  while (std::cin >> n >> m >> c && n !=0) {
    int r = (c ==1) ? 1  : 0;
    std::cout << ((n-7) * (m-7)+r)/2 << std::endl;
  }
  return 0;}
