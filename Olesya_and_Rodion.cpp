#include <bits/stdc++.h>
#include <iostream>
int main (int argc, char *argv[]) {
  long long n, m;
  std::cin >> n >> m;
  if (n ==1 && m == 10) {
    printf("-1\n");
    return 0;
  }
  if(n == 1) {
    std::cout << m << std::endl;
    return 0;
  }
  if (m == 10) {
    n--;
  }
  std::cout << m;
  for (long long i = 0; i < n - 1; i++) {
    std::cout << "0";
  }

  
  return 0;
}
