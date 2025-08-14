#include <iostream>
#include <string>
int main (int argc, char *argv[]) {
  int n;
  std::cin >> n;
  std::string s(n, ' ');
  std::cin >> s;
  int num=0;
  for (int i = 0; i < n; i++) {
    if (s[i] == s[i+1]) {
      num++;
      
    }
    
  }
  std::cout << num;

  return 0;
}
