#include <iostream>
#include <string>
int main (int argc, char *argv[]) {
  int n1, n2, n3, n4, cal =0;
  std::string s;
  std::cin >> n1 >> n2 >> n3 >> n4;
  std::cin >> s;
  int length = s.size();
  for (int i = 0; i < length; i++) {
    if (s[i]=='1') {
      cal += n1;
    }else if (s[i] == '2') {
      
      cal += n2;
    }else if (s[i] == '3') {
      
      cal += n3;
    }else if (s[i] == '4') {
      
      cal += n4;}
  }
    std::cout << cal;
  return 0;
}
