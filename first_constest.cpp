#include <iostream>
#include <numeric>
#include <ostream>
int main (int argc, char *argv[]) {
  int t, l,r;
  std::cin >> t;
  int arr[t];
  for (int i = 0; i < t; i++) {
    int prime =0, co =0 ;
    std::cin >> l >> r;
      
      for (int j = l; j <= r; j++) {
       for (int k = j+1; k <= r; k++) {
         if(std::gcd(j, k) ==1){
         prime++;}
        
       } 
      }
      std::cout << prime << std::endl;
    
    arr[i]=prime;

    
  }
  for (int i = 0; i <t; i++) {
    std::cout << arr[i] << std::endl;
    
  }
  return 0;
}
