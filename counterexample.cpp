#include <bits/stdc++.h>
#include <iostream>
long long n, m;
long long a = -1,b,c;
bool iscoprime(long long x, long long y) {
  return std::__gcd(x, y) == 1;
}
void solve() {
  std::cin >> n >> m;
  for (long long i = n; i <= m; i++) {
    for (long long j = i+1; j <= m; j++) {
      for (long long k = j+1; k <= m; k++) {
        if (iscoprime(i, j) && iscoprime(j, k) && !iscoprime(k, i) && i != j && j != k && i != k) {
          a = i;
          b = j;
          c = k;
          return;
        
        }
      }
    }
  }
}
int main (int argc, char *argv[]) {
  solve();
  if (a == -1) {
    std::cout << -1 << std::endl;
  } else {
    std::cout << a << " " << b << " " << c << std::endl;
  }
  return 0;
}
