#include <bits/stdc++.h>
using namespace std;
char a[1005];
int main (int argc, char *argv[]) {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int s, e;
  for (int i = 0; i < n; i++) {
    if (a[i] == 'R' || a[i] == 'L') {
      s = i;
      break;
    }
  }
  for (int i = n; i >= s; i--) {
    if (a[i] == 'R' || a[i] == 'L') {
      e = i;
      break;
    }
  }
  if (a[s] == 'R' && a[e] == 'R') {
    cout << s + 1 << " " << e + 1+1 << endl;
  }else if (a[s] == 'L' && a[e] == 'L') {
    cout << e + 1 << " " << s +1-1 << endl;
  } else if (a[s] == 'R' && a[e] == 'L') {
    for (int i = s; i <= e; i++) {
      if (a[i] != a[s]) {
        cout << s+1 << " " << i-1+1 << endl;
        break;
      }
    }
  }
  return 0;
}
