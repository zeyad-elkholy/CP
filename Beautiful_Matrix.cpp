#include <cstdlib>
#include <iostream>
int main (int argc, char *argv[]) {
  int arr [5][5];
  int cy, cx;
  for (int i = 0; i < 5; i++) {
   for (int j = 0; j < 5; j++) {
     std::cin >> arr[i][j];
     if (arr[i][j] == 1){
       cy = i+1;
       cx=j+1;
     } 
   } 

  }
  int moves = abs(cx - 3) + abs(cy - 3);
  std::cout << moves;

  return 0;
}
