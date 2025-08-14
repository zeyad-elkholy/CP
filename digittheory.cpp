#include <iostream>
int n;
void solve(){
  std::cin >> n;
  int ans = n%4;
  if(n == 0)
    std::cout << "1\n";
  else if(ans == 1)
    std::cout << 8 << "\n";
  else if(ans == 2)
    std::cout << 4 << "\n";
  else if(ans == 3)
    std::cout << 2 << "\n";
  else if(ans == 0 && n >0)
    std::cout << 6 << "\n";
}
int main (int argc, char *argv[]) {
  solve();
  return 0;
}
