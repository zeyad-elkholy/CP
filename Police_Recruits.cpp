#include <iostream>
int main (int argc, char *argv[]) {
  int length;
  std::cin >> length;
  int arr[length];
  for (int i = 0; i < length; i++) {
    std::cin >> arr[i];
    
  }
  int rec =0, totalcrime=0;
  for (int i = 0; i < length; i++) {
    if (arr[i] == -1 ) {
      if(rec> 0){rec--;}else{totalcrime++;};
      
    }else{
      rec+= arr[i];
    }
  }
  std::cout << totalcrime;
  return 0;
}
