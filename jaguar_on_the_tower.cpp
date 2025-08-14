#include <bits/stdc++.h>
#include <iostream>
#include <map>
int main (int argc, char *argv[]) {
    freopen("jaguar.in", "r", stdin);
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::map<int, int> m;

    long long R= 0;
    std::cin >> t;
    while (t--){
      int N, x, y;
      std::cin >> N >> x >> y;
      while (N--){
        int a, b, h;
        std::cin >> a >> b >> h;

        if (a>=x && b>=y) {
          if (m.count(h)==0) {
            R++;
            m[h] = h;
          }else {
          continue;
          }

        }
        
      }
    }
    std::cout << R<< "\n";
  return 0;
}
