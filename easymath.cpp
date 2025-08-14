#include <iostream>
int main (int argc, char *argv[]) {
  unsigned long long n, m, d,a, t;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    int c=0;
    std::cin >> n >> m >> d >> a;
    for (unsigned long long j = n; j <= m; j++) {
      if (j%a!=0&&j%(a+d)!=0 &&j%(a+(2*d))!=0 &&j%(a+(3*d) ) !=0&& j%(a+(4*d)) !=0) {
      c++;}
      
    }
    std::cout <<c << "\n";


    
  }
  return 0;
}

