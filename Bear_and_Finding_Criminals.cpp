#include <iostream>
int c [110];
int n, a;
int main (int argc, char *argv[]) {
  std::cin >> n>>a;
  for (int i = 0; i < n; i++) {
    std::cin >> c[i];
  }
  int count = 0;
  a--;
  if (c[a] == 1) {
    count++;
  }
  for (int i = 1; i < n; i++) {
      if(a-i>=0 && a+i<n&&c[a-i] == 1 && c[a+i] == 1 ) {
        count+=2;
      }
      else if (a-i >= 0 && c[a-i] == 1 && a+i >= n) {
        count++;
      }
      else if (a+i < n && c[a+i] == 1 && a-i < 0) {
        count++;
      }
  }

  std::cout << count << std::endl;
  return 0;
}
