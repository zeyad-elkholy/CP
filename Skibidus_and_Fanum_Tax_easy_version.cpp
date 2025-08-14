#include <iostream>
int main (int argc, char *argv[]) {
  int t, n, m;
  std::cin >> t >> n >> m;
  int a[n], b[m];
  for (int x = 0; x < t; x++) {
    for (int i = 0; i < n; i++) {std::cin >> a[i];}
    for (int i = 0; i < m; i++) {std::cin >> b[i];}
    for (int i = 0; i < n; i++) {a[i]=b[0]-a[i];}

    
  }

  return 0;
}
