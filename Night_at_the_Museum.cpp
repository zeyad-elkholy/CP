#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>
int main (int argc, char *argv[]) {
  int   step=0, right=97;
  std::string ww;
  std::cin >> ww;
  for (int i = 0; i < ww.size(); i++) {
      int r = abs(ww[i]-right);
      if(r <=13){
        step+= r;
      }else{
        step+=(26-r);
      }
      right = ww[i];
    
  } 
  std::cout << step;
  return 0;
}
