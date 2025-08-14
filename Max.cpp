#include <algorithm>
#include <iostream>
typedef long long ll;
int main (int argc, char *argv[]) {
  int N;
  std::cin >> N;
  ll a[N];
  for (int i = 0; i < N; i++) {
    std::cin >> a[i];
  }
  ll *max = std::max_element(a, a + N);
  std::cout << *max << std::endl;
  return 0;
}
