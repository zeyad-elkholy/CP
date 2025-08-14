#include <bits/stdc++.h>
long long n,k, oddone;

long long solve (long long n, long long k) {
  oddone = ceil(n / 2.0);
  if (k <= oddone) {
    return 2 * k - 1; 
  } else {
    return 2 * (k - oddone); 
  }

  

}
int main (int argc, char *argv[]) {
  std::cin >> n >> k;
  std::cout << solve(n, k) << std::endl;
  
  return 0;
}
