#include <algorithm>
#include <iostream>
int main (int argc, char *argv[]) {
  int y,w;
  std::cin>> y >> w;
  int max = std::max(y,w);
  int a =  (6 - max)+1;
  if (a ==6) {std::cout <<"1/1";}
  else if( a%3 ==0){std::cout << a/3 << '/' << 6/3;}
  else if( a%2 ==0){std::cout << a/2 << '/' << 6/2;}else{std::cout << a<<'/' << 6;}

  return 0;
}
