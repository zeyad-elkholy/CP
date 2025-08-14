#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
  int n;
  cin >> n;
  int a = 0;
  while (n > 0) {
    if (n%2 ==1) {
      a++;
    }
    n /= 2;
  }
  cout << a << endl;
    return 0;
}

