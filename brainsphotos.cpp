#include <bits/stdc++.h>
#include <iostream>
#include <string>
int n,m;
std::string ans = "#Black&White";
void solve(){
  std::cin >> n >> m;
  char a[n][m];
  for (int i =0; i < n ; ++i) {
    for (int j =0; j < m ; ++j) {
      std::cin >> a[i][j];
    }
  }
  for (int i =0; i < n ; ++i) {
    for (int j =0; j < m ; ++j) {
      if (a[i][j] != 'B' && a[i][j] != 'W' && a[i][j] != 'G') {
        ans = "#Color";
        return;
      }
    }
  }

}
int main (int argc, char *argv[]) {
  solve();
  std::cout << ans << std::endl;
  return 0;
}
