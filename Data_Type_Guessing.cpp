#include <cstdint>
#include <iostream>
typedef long long ll;
int main (int argc, char *argv[]) {
  ll n, k, a;
  std::cin >> n >> k >>a;
  if (n*k %a == 0){
    if (n*k/a > 2147483648|| n*k/a < -2147483648 ){
      std::cout << "long long" << std::endl;
    } else {
      std::cout << "int" << std::endl;
    }
  }else {
    std::cout << "double" << std::endl;
  }
  return 0;
}
