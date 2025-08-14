#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int n;
long long a[13849];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long odd = 1;

    for (int i = 0; i < n; i++) {
      if(a[i] %2 == 0) {
            cout << a[i] / 2 << endl;
        } else {
          if (odd % 2 == 0) {
              cout << (long long)floor(a[i] / 2.0 )<< endl;
          } else {
              cout << (long long)ceil((a[i] ) / 2.0) << endl;
          }
          odd++;
        }
    }
    return 0;
}

