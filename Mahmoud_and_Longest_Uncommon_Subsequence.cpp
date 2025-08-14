#include "iostream"
#include "string"
#include <algorithm>
int main (int argc, char *argv[]) {
  std::string a,b;
  int counter = -1;
  int m = std::max(a.length(), b.length());
  std::cin >> a >> b;
  if (a.length() == b.length()){
    for (int i = 0; i < m; i++) {
      if (a[i] == b[i]) {
        m--;
      }
      
    }
    std::cout << m;
  }else{
    std::cout << m;
  }
  return 0;
}
