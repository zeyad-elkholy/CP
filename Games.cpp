#include <iostream>
int main (int argc, char *argv[]) {
  int n;
  std::cin >> n;
  int home[n], away[n];
  for (int i = 0; i < n; i++) {
    std::cin >> home[i] >> away[i];
    
  }
  int bruh=0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (home[i] == away[j]) {
        bruh++;
      }
      
    }
    
  }
  std::cout << bruh;
  return 0;
}
