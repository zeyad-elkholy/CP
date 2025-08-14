#include <iostream>
#include <string>
int main (int argc, char *argv[]) {
  int a, b;
  std::cin >> a >> b;
  bool empty = true;

 for (int i = a; i <= b; ++i) {
   std::string s = std::to_string(i);
        bool isLucky = true;

        for (char c : s) {
            if (c != '4' && c != '7') {
                isLucky = false;
                break;
            }
        }

        if (isLucky) {
          std::cout << i << " ";
            empty = false;
        }
    }
  if (empty) {
    std::cout << -1;
  }

  return 0;
}
