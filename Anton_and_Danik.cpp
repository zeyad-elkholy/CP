#include <iostream>
int main (int argc, char *argv[]) {
  int n;
  int a =0, d=0;
  std::string s;
  std::cin >> n;
  std::cin >> s;
  for (int i= 0; i < n; i++){
    if (s[i] == 'A'){
      a++;
    }else if (s[i] == 'D'){
      d++;
    }
  }
  if ( a > d){
    std::cout << "Anton";
  }else if (d > a){
    std::cout << "Danik";
  }else {
    std::cout << "Friendship"; 
  }
  return 0;
}
