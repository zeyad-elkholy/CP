#include <iostream>
long long r1, r2, c1, c2, d1, d2;
long long a, b, c, d;
int main (int argc, char *argv[]) {
  std::cin >> r1 >> r2;
  std::cin >> c1 >> c2;
  std::cin >> d1 >> d2;
  for (a = 1; a <= 9; a++) {
    for (b = 1; b <= 9; b++) {
      for (c = 1; c <= 9; c++) {
        for (d = 1; d <= 9; d++) {
          if (a + b == r1 && c + d == r2 &&
              a + c == c1 && b + d == c2 &&
              a + d == d1 && b + c == d2 &&
              a != b && a != c && a != d &&
              b != c && b != d && c != d) {
            std::cout << a << ' ' << b << '\n';
            std::cout << c << ' ' << d << '\n';
            
            return 0;
          }
        }
      }
    }
  }
  std::cout << -1 << '\n';
  return 0;
}
