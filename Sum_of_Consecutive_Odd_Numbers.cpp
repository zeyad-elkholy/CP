#include <algorithm>
#include <iostream>
int main (int argc, char *argv[]) {
  int n, m , t;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    std::cin >> n >> m;
    int start = std::min(n, m);
    int end = std::max(n, m);
    int sum =0;
    for (int j = start+1; j < end; j++) {
      if (j % 2 != 0) {
        sum += j;
      }
    }
    std::cout << sum << std::endl;
  }
  return 0;
}
