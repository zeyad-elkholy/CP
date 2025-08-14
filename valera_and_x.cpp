#include <bits/stdc++.h>
#include <iostream>
int n;
char s[310][310];
bool answer = true;
void solve(){
  std::cin >> n;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j<n; ++j)
    std::cin >> s[i][j];
  }
  if(s[0][0] == s[0][1]) {
    answer = false;
    return;
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(j == i || i +j == n -1) {
        if(s[i][j] != s[0][0]) {
          answer = false;
          break;
      }
      }else {
        if(s[i][j] != s[0][1]) {
          answer = false;
          break;
        }
      }
    }

  }

  
}
int main (int argc, char *argv[]) {
  solve();
  if(answer) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;
}

