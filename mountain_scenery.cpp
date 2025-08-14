#include <iostream>
long long n, k;
long long a[205];
int main (int argc, char *argv[]) {
  std::cin >> n >> k;
  for (long long i = 0; i < 2*n+1; i++) {
    std::cin >> a[i];
  }

  for (long long i = 0; i < 2*n+1 ; i++) {
    if(i%2 ==0 ||k <= 0) {
    }else {
      if(a[i-1] >= a[i]-1 || a[i+1] >= a[i]-1) {
      }else {
        a[i]--;
        k--;
      }
    }
    std::cout << a[i] << " ";
  }
  return 0;
}
