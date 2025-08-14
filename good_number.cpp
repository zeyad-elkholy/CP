#include <iostream>
#include <numeric>
#include <string>
int n, k;
bool seen[10];
int size= 0;
int count = 0;
void bruh() {
  std::cin >> n >> k;
  for (int i =0 ; i <n ; ++i ) {
    std::string s;
    std::cin >> s;
    std::fill(seen, seen + 10, false);
    for (int j = 0; j < s.size(); ++j) {
      if (s[j] >= '0' && s[j] <= '0' + k) {
        seen[s[j] - '0'] = true;
      }
      else {
        continue;
      }
    }
    int size = std::accumulate(seen, seen + 10, 0);
    if (size == k+1) {
      count++;
    }
  }
  std::cout << count << std::endl;
}
int main (int argc, char *argv[]) {
  bruh();
  return 0;
}
