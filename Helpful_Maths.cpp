#include <algorithm>
#include <iostream>
#include <string>
int main (int argc, char *argv[]) {
  std::string s;
  std::cin >> s;
  int c1 =0, c2=0, c3=0;
  int arr[s.size()];
  for (int i = 0; i < s.size(); i++) {
    if (s[i]=='+') {
      continue;
      
    }else if( s[i] =='1'){
      c1++;
    }else if( s[i] =='2'){
      c2++;
    }else if( s[i] =='3'){
      c3++;}
    
  }
 for (int i = 0; i < c1; i++) {
        std::cout << '1';
        if (i < c1 - 1 || c2 > 0 || c3 > 0) std::cout << '+';
    }
    for (int i = 0; i < c2; i++) {
        std::cout << '2';
        if (i < c2 - 1 || c3 > 0) std::cout << '+';
    }
    for (int i = 0; i < c3; i++) {
        std::cout << '3';
        if (i < c3 - 1) std::cout << '+';
    }
  /*for (int i = 0; i < c1; i++) {if(c2 == 0&&c3==0 && c1 !=1){std::cout << "1";}else{std::cout << "1+";}}*/
  /*for (int i = 0; i < c2; i++)  {if(c3==0){std::cout << "2";}else{std::cout << "2+";}}*/
  /*for (int i = 0; i < c3; i++) {if(i == c3-1){std::cout << "3";}else{std::cout << "3+";}}*/
  return 0;
}
