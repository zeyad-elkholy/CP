#include <iostream>
#include <ostream>
#include <string>
#include <vector>
int main (int argc, char *argv[]) {
  int n;
  std::cin >>n;
  std::vector<std::string> s(n);
  for (int i = 0; i < n; i++) {
    std::cin >> s[i];
    
  }
  for (int i = 0; i < n; i++) {
    if (s[i].size() > 10 ) {
      std::cout << s[i][0] << s[i].size() - 2 << s[i].back() << std::endl;
      
    }else{
      std::cout << s[i] << std::endl;
    }
    
  }
  
  return 0;
}
