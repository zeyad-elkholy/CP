#include <bits/stdc++.h>
int main() {
   freopen("endure.in", "r", stdin);
  int t;
  std::cin >> t;
  while (t--){
    std::string name;
    long long y,s;
    std::cin >> name >> y >> s;
    std::cout <<y*3600LL*24LL*365LL*(long long)s << std::endl;

  }
  return 0;
}
