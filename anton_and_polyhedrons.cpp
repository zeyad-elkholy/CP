#include <bits/stdc++.h>
int n;
std::string s;
long long f;
void solve (){
  std::cin >> n;
  for (int i =0 ;i <n ; ++i) {
    std::cin >> s;
    if (s == "Tetrahedron") {
      f+=4;
    }else if (s == "Cube") {
      f+=6;
    
    }else if (s == "Octahedron") {
      f+=8;
    
    }else if (s == "Dodecahedron") {
      f+=12;
    
    }else if (s == "Icosahedron") {
      f+=20;
    }
  }
}
int main (int argc, char *argv[]) {
  solve();
  std::cout << f;
  return 0;
}
