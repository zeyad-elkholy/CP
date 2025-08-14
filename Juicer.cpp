#include <iostream>
#include <ostream>
int main (int argc, char *argv[]) {
  int n, m, o;
  std::cin >> n>> m>> o;
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  int w = 0, times =0;
  for (int i = 0; i < n; i++) {
    if (arr[i] <= m) {
      w += arr[i];
    }
    if (w > o) {
      times++;
      w=0;
      
    }

    
  }
  std::cout << times;
  return 0;
}
