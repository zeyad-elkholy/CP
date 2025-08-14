#include <iostream>
#include <numeric>
#include <ostream>
int main (int argc, char *argv[]) {
  long long z,x,y;
  std::cin >> z;
  for (int i =0; i < z; ++i) {
    std::cin >> x >> y;
    // if( x ==y){std::cout << 1<< std::endl;continue;}
    // if (x%y ==0) {
    //   std::cout << x/y<< std::endl;
    //   continue;
    // }
    // if (y%x ==0) {
    //   std::cout << y/x<< std::endl;
    //   continue;
    // }
      

    std::cout << (std::lcm(x, y)/x) * (std::lcm(x, y)/y) << std::endl;
  
  }
  return 0;
}
