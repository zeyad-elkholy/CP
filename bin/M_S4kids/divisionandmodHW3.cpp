#include <iostream>
int main (int argc, char *argv[]) {
  int a;
  
  std::cin >> a;
  int s=0;
  s+= a%10;
  a/=10;
  s+= a%10;
  a/=10;
  s+= a%10;
  a/=10;
  std::cout << s;

  return 0;
}
