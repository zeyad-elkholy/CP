#include <algorithm>
#include <iostream>
int main (int argc, char *argv[]) {
  int n , m;
  while (std::cin >>n >> m) {
    int start= std::min(n, m);
    if (start <= 0){
      break;
    }else{
      int end = std::max(n, m);
      int sum = 0;
      for (int i = start; i <= end; i++){

        std::cout << i << " ";
        sum += i;


      }
      std::cout << "sum =" << sum << std::endl;
    }

  
  }
  return 0;
}

