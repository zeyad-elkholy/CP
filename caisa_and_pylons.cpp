#define ll long long
#include <bits/stdc++.h>
using namespace std;
ll n, s = 0,e = 0;
ll h[(int)1e5 + 5] = {0};
void calcScore(ll x){
  e+= h[x] - h[x+1];
  if (e < 0) {
    s += abs(e);
    e = 0;
  }
}
int main (int argc, char *argv[]) {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> h[i];
  }
  h[0] = 0;
  for (int i = 0; i < n; i++) {
    calcScore(i);
  }
  cout << s << endl;
  return 0;
}
