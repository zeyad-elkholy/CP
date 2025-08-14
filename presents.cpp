#include <iostream>
int main (int argc, char *argv[]) {
  int n;
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {std::cin >> arr[i];}
  for (int i = 0; i < n; i++) {
    for (int x = 0; x <n; x++) {
      if (i+1 == arr[x]) {
        std::cout << x+1 << " ";
        
      }
      
    }
  }
  return 0;
}
