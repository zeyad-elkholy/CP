#include <iostream>
int main (int argc, char *argv[]) {
  int n;
  std::cin >>n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  int g=0;
  for (int i = 0; i < n; i++) {
    if (arr[i] != arr[i +1]){
      g++;
    }
  }
  std::cout <<g;
  return 0;
}
