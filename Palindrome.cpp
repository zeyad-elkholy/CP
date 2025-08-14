#include "iostream"
#include <string>
int main (int argc, char *argv[]) {
  std::string s;
  std::cin >> s;
  int n = s.size();
  int l = 0, r = n - 1;
  bool lz = true; // leading zero
  for (int i = n-1; i >= 0; i--){
    if (lz && s[i] == '0')continue;
    std::cout << s[i];
    lz = false;
    
  }
  std::cout << std::endl;
  while (l < r) {
    if (s[l] != s[r]) {
      std::cout << "NO" << std::endl;
      return 0;
    }
    l++;
    r--;
  }
  std::cout << "YES" << std::endl;
  return 0;
}
