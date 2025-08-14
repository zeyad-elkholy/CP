#include <iostream>
#include <vector>
long long n, k;
long long start, end;
std::vector<long long> a;
long long ans = 0;
int main (int argc, char *argv[]) {
  std::cin >> n >> k;
  for (int i = 0; i <n ; i++) {
    std::cin >> start >> end;
    for (int j = start; j <= end; j++) {
      a.push_back(j);
    }
  }
  size_t size = a.size();
  if (size%k ==0) {
    std::cout << "0" << std::endl;
    return 0;
  }else {
    while (size%k != 0) {
      size++;
      ans++;
    }
  }
    std::cout << ans << std::endl;
  return 0;
}
