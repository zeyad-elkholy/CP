#include <bits/stdc++.h>
#include <iostream>
long long n, m, a;
long long c = 0;
long long x = 0,y =0;
void solve() {
    std::cin >> n >> m >> a;
    while (n > 0 ) {
      n -=a;
      x++;

    }
    while (m > 0 ) {
      m -=a;
      y++;
    }
    std::cout << x*y;

}
int main (int argc, char *argv[]) {
  solve();
  return 0;
}
