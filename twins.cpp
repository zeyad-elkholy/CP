#include <algorithm>
#include <iostream>
int main (int argc, char *argv[]) {
  int n;
  std::cin >> n;
  int sum = 0;
  int N[n];
  for (int i = 0; i < n; i++) {
    std::cin >> N[i];
    sum += N[i];
  }
  int half = sum / 2;
  int me= 0;
  int c= 0;
  std::sort(N, N + n, std::greater<int>());
  for (int x  : N) {
    me+=x;
    c++;
    if (me >half) {
      break;
    
    }
  
  }
  std::cout << c;
  return 0;
}
