#include <iostream>
int main (int argc, char *argv[]) {
  int arr[4];
  int same= 0;
  bool counted[10] = {false};
  for (int i = 0; i < 4; i++) {std::cin >> arr[i];}
   for (int i = 0; i < 4; i++) {
     if(arr[i] == arr[i-1]||arr[i] == arr[i-3]||arr[i] == arr[i-2]){
       same++;
     }
    
   } 
  std::cout << 4-(4-same);
  return 0;
}
