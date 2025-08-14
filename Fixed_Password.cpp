#include <iostream>
typedef long long ll;
int main (int argc, char *argv[]) {
  int password = 1999;
  int main;
  while (true) {
    std::cin >> main;
    if (main == password) {
      std::cout << "Correct" << std::endl;
      break;
    } else {
      std::cout << "Wrong" << std::endl;
    }
  }
  return 0;
}
