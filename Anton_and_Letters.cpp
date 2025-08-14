#include <iostream>
#include <string>
int main (int argc, char *argv[]) {
  std::string s;
  std::getline(std::cin, s);
  int n = s.size();
  std::string arr[n];
  for (int i = 0; i < s.size(); i++) {
    if ( s[i] != '{' && s[i] != '}' && s[i] != ',' ) {
      arr[i-1] = s[i];
      
    }
    
  }
  int c =sizeof(arr);
  /*for (int i = 0; i < n; i++) {*/
  /*  for (int j = 0; j < n; j++) {*/
  /*    if (arr[i] != arr[j]) {*/
  /*      c++;*/
  /*    }*/
  /**/
  /*  }*/
  /**/
  /*}*/
  for (int i = 0; i < length; i++) {
    
  }
  std::cout << c;
  return 0;
}
