#include <iostream>
#include <string>
int main (int argc, char *argv[]) {
  int n,k;
  char letters[] = "abcdefghijklmnopqrstuvwxyz";
  std::cin >>n>>k;
  std::string r;
for (int i = 0; i < n; i++) {
        r+= letters[i % k];}
  /*while (r.length() > n) {*/
  /**/
  /**/
  /*  for (int j = 0; j < k; j++) {*/
  /*    r[j] = letters[j];*/
  /**/
  /*  }*/
  /**/
  /*}*/
  std::cout << r;  
  return 0;
}
