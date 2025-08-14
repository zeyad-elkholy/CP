#include <bits/stdc++.h>
double x1, Y1, x2, y2, x3, y3;
int main() {
  while (std::cin >> x1 >> Y1 >> x2 >> y2 >>  x2 >> y2 >> x3 >> y3) {
    double x4 = x3 + x1 - x2;
    double y4 = y3+  Y1 - y2;
    std::cout << x4 << " " << y4 << std::endl;
  }
    return 0;
}
