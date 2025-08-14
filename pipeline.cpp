#include <iostream>
using namespace std;
long long n, m;
long long sum(long long n){
  return n * (n + 1) / 2;
}
long long sum(long long n, long long m){
  return sum(m) - sum(n - 1);
}
long long Min (long long n, long long m){
  long long st = 1;
  long long en = m;
  while (st < en){
    long long mid = (st + en) / 2;
    long long s = sum(mid, m);
    if (s ==n){
      return m- mid + 1;
    }
    if (s> n)
      st = mid + 1;
    else
      en = mid;
  }
  return m - st + 2;
}
int main (int argc, char *argv[]) {
  cin >> n >> m;
  if (n ==1){
    cout << "0" << endl;
  }else if (n <=m){
    cout << 1 << endl;
  }else{
    m--;
    n--;
    if (sum(m) <n )
      cout << -1 << endl;
    else {
      cout << Min(n, m) << endl;

    }
  }
  return 0;
}
