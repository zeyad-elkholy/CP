#include <iostream>
using namespace std;
long long n, k, sum =0,  mid;
long long lines(long long x){
  sum = 0;
  sum += x;
  long long v = x;
  while (v > 0 ){
    // cout << "v: " << v << " x: " << x << endl;
    v = v/k;
    sum += v;
  }
  return sum;
}
long long Min (long long n){
  long long st = 1;
  long long en = n;
  while (st < en){
    mid = (st + en) / 2;
    long long s = lines(mid);
    // cout <<"mid: " << mid << " s: " << s<< endl;
    if (s ==n){
      return mid;
    }
    if (s> n)
      en = mid;
    else
      st = mid + 1;
  }
  return en;
}
int main (int argc, char *argv[]) {
  cin >> n >> k;
  long long ans = Min(n);
  cout << ans << endl;
  // cin >> n >> k >> mid;
  // cout << lines(mid) << endl;

  return 0;
}
