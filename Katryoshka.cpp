#include <iostream>
typedef long long ll;
ll typethree(ll n, ll m, ll k) {
  return std::min(n, std::min(m, k));
}
ll typeone(ll n, ll m, ll k) {
  return std::min(n/2,k);
}
int main (int argc, char *argv[]) {
  ll n, m,k, ans=0;
  std::cin >> n >> m >> k;
    ans = typethree(n, m, k);
    n -= ans;
    k -= ans;
    
  ans += typeone(n, m, k);
  std::cout << ans << std::endl;
  return 0;
}
