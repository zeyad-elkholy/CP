#include <iostream>
int main (int argc, char *argv[]) {
  double a, b;
  std::cin >>a >>b;
  int f = a/b;
  double i=a/b;
  std::cout << i-f;
  return 0;
}
