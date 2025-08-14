#include <bits/stdc++.h>
#include <iostream>
long long n;
void solve(){
  if (n%2 == 0) {
    std::cout << n/2 << std::endl;
  } else {
    std::cout << -(n+1)/2 << std::endl;
  
  }
}
int main() {
  std::cin >> n;
  solve();
  return 0;
}
