#include "iostream"
int main (int argc, char *argv[]) {
  int n,f,s;
  std::cin >> n;
  f = n /10 ;
  s = n % 10;
  std::cout << f << " " << s << std::endl;
  return 0;
}
