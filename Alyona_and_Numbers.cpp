#include <iostream>
long long a[5]{0};
long long b[5]{0};
int main (int argc, char *argv[]) {
  int n , m;
  std::cin >> n >> m;
  long long count = 0;
  for (int i = 1; i <= n; i++) {
    a[ i % 5 ]++;
  }
  for (int i = 1; i <= m; i++) {
    b[ i % 5 ]++;
  }
  for (int i = 0; i  <5; i++) {
    for (int j = 0; j  <5; j++) {
      if ((i + j) % 5 == 0) {
        count += a[i] * b[j];
      }
    }
  }
  std::cout << count << std::endl;
  return 0;
}
