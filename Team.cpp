#include <iostream>
int main (int argc, char *argv[]) {
  int n;
  std::cin>> n;
  int x,y,z, imp=0;
  for (int i =0; i < n; i++){
    std::cin >> x >> y >> z;
    if (x+y+z >=2){
      imp++;
    }
  }
  std::cout << imp;
  return 0;
}
