#include <cctype>
#include <iostream>
#include <string>
int main (int argc, char *argv[]) {
  std::string a,b;
  std::cin >> a >> b;
  int length = a.size();
  std::string aa(length, ' '), ab(length, ' ');
  for (int i = 0; i < length; i++) {
    aa[i] = tolower(a[i]);
    ab[i] = tolower(b[i]);
    
  }
  int result = 0;
  for (int i = 0; i < length; i++) {
    if (aa[i]>ab[i]){
      result =1;
      break;
    }else if (aa[i] < ab[i]){
      result =-1;
      break;
    }
  }
  std::cout << result;
  return 0;
}
