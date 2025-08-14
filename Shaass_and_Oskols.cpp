#include <iostream>
#include <ostream>
int main (int argc, char *argv[]) {
  int n,m, x, y;
  std::cin>> n;
  int arr[n];
  for (int i = 0; i < n; i++) {std::cin >> arr[i];}
  std::cin >> m;
  for (int i = 0; i <m ; i++) {

    std::cin >> x >> y;
    x--;
    if (x+1 <n) {
    arr[x +1] += (arr[x]-y );
    }
    if (x - 1 >=0) {

    arr[x -1]+=y-1;
      
    }
    arr[x] =0;
  }
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << std::endl;
    
  }
  return 0;
}
