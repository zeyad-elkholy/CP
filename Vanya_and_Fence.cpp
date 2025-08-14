#include <iostream>
int main (int argc, char *argv[]) {
  int n,h;
  std::cin >> n >> h;
  int a[n];
  for (int i = 0; i < n; i++){
    std::cin >> a[i];
  }
  int width =0;
  for (int i = 0; i < n; i++) {
    if (a[i] > h){
      width = width +2;
    } else{
      width++;
    }

  }
  std::cout << width;
  return 0;
}
