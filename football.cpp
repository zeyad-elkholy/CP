#include <bits/stdc++.h>
#include <iostream>
#include <string>
int n;
std::string second;
int c1 = 0;
int c2 = 0;
std::vector<std::string>s;
void solve() {
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::string name;
    std::cin >> name;
    s.push_back(name);
  }
  std::string first = s[0];
  for (size_t i = 0; i < n; i++) {
    if (s[i] != first) {
      second = s[i];
      break;
    }
  }
  for (std::string c  : s) {
    if(c == first){c1++;}
    if (c == second){c2++;} 
  }
  if (c1> c2) {
    std::cout << first;
  }else {
    std::cout << second;
  }
}

int main (int argc, char *argv[]) {
  solve();
  return 0;
}
