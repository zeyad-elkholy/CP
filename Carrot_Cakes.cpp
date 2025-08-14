#include <iostream>
#include <ostream>
int main (int argc, char *argv[]) {
  int n, t, k, d;
  std::cin>> n >> t >> k >> d;
  int w=d, wo =0, cakes=0;
  while (n > cakes) {
    cakes +=k;
    wo+=t;
    
  }
  cakes =0;
  if (d >= t ) {
    cakes = (d/t)*k;
    
  }
  while (n > cakes) {
    cakes += (k*2);
    w+=t;
    
  }
  /*std::cout << w  << " "<< wo << std::endl;*/
  if (w < wo) {
    std::cout << "YES";
    
  }else{
    std::cout << "NO";
  }
  return 0;
}
