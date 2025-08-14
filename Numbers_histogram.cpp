#include <iostream>
#include <string>
#include <vector>
int main (int argc, char *argv[]) {
  char s;
  int n, w;
  std::cin >>s >> n;
  std::vector<int> N;
  for (int i=0; i < n; ++i){
    std::cin >> w;
    N.push_back(w);
    
  }
  for (auto x : N) {
    for (int i = 0; i < x; i++) {
      std::cout << s;
      
    }
    std::cout << std::endl;
  
  }
  return 0;
}
