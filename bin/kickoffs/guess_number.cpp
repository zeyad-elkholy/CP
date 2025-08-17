#include "iostream"
int main (int argc, char *argv[]) {
int low = 0, high = 1'000'000'000;
while (true) {
    int mid = low + (high - low) / 2;
    std::cout << mid << std::endl;
    std::cout.flush();

    char c;
    std::cin >> c;

    if (c == '<') {
        high = mid - 1;
    } else if (c == '>') {
        low = mid + 1;
    } else if (c == '=') {
        std::cout << "! " << mid << std::endl;
        break;
    }
}
  
  return 0;
}
