#include <bits/stdc++.h>
#include <iostream>
int n,m;
int next;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve(){
  std::cin >> n >> m;
  next = n;
  while (true) {
    next++;
    if (isPrime(next)) {
      break;
    }
  }
  if (next == m) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  
  }
  
}
int main (int argc, char *argv[]) {
  solve();

  return 0;
}
