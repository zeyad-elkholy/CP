#include <iomanip>
#include <ios>
#include <iostream>
int main (int argc, char *argv[]) {
  long long x, d1, n;
  char d;
  std::cin >> n >> x;
  long long s=0;
  for (int i = 0; i < n; i++) {
    std::cin >> d >> d1;
    if (d =='+') {
      x+=d1;
      
    }else if(d == '-'){
      if (d1 > x) {
        s++;
        
      }else {
        x-=d1;

      }
    }
    
  }
  std::cout << std::fixed<< std::setprecision(0);
  std::cout << x  << ' '<< s;
  return 0;
}
