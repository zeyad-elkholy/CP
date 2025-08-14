#include <iostream>
#include <ostream>
int main (int argc, char *argv[]) {
  int n;
  std::cin >> n;
  for (int i = 1; i <= n; ++i){
    int start = 1 +4 *(i-1);
    std::cout << start << " " << start+1 << " " << start +2 << " PUM"<< std::endl;
  }
  return 0;
}
