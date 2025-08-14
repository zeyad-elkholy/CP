#include "iostream"
#include <string>
int main (int argc, char *argv[]) {
  
  int t;
  std::cin >> t;
  std::cin.ignore();
  std::string s[t];
  for (int i = 0; i < t; i++) {
    std::getline(std::cin, s[i]);
  }
  for (int i=0 ;i <t; i++) {
    std::string word(1, s[i][0]); 
    for (int x=0 ; x < s[i].size(); x++) {
      if (s[i][x] == ' ') {
        word += s[i][x+1]; 
      }
      
    
    }
    std::cout << word << std::endl;
  }
  return 0;
}
