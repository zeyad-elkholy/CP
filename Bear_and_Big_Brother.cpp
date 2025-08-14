#include <iostream>
int main (int argc, char *argv[]) {
  int a,b;
  std::cin >> a >> b;
  int years=0;
  while (b >=a) {
    a *=3;
    b *=2;
    years++;

    
  }
  std::cout << years;
  return 0;
}
