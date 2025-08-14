#include <iostream>
int d, h, v, e;
void solve() {
  std::cin >> d >> h >> v >> e;
    double radius = d / 2.0;
    double volume = (3.14159265358979323846 * radius * radius) * h;
    double a7a= (4.0 * v )/ (3.14159265358979323846 * d * d);
  if (e < a7a) {
    double time = (volume / (v - e* 3.14159265358979323846 * radius * radius));
    std::cout << "YES\n" << time << "\n";
  }else {
    std::cout << "NO\n";
    return;
  }
    
}
int main (int argc, char *argv[]) {
  solve();
  return 0;
}
