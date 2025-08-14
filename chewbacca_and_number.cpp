#include <iostream>
#include <string>
std::string s;
int main (int argc, char *argv[]) {
  std::cin >> s;


  for (int i = 0; i < s.size(); i++) {
    if (s[i]== '9' && i == 0) {
      std::cout << s[i];
      continue;
    }
    if ((s[i]- '0') >=5){
      std::cout << '9' - s[i];
    }else {
      std::cout << s[i];
    }
  }
  return 0;
}
