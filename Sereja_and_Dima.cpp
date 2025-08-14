#include <iostream>
int main (int argc, char *argv[]) {
  int length;
  std::cin >> length;
  int arr[length];
  for (int i = 0; i < length; i++){ std::cin >> arr[i];}
  bool isSturn= true; 
  int s=0,d=0, i= 0, j= length-1;
  while (i<= j) {
    
      int add=0;
      if ( arr[i] > arr[j]) {
        add=arr[i];
        i++;
      }else{
        add=arr[j];
        j--;
      }
      if (isSturn) {
        s+=add;
        
      }else{
        d+=add;
      } 
      isSturn = !isSturn;
    
  }
  std::cout << s << " " << d;
   
  return 0;
}
