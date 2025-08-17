#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
vector<pair<ll, ll>> ip;
void solve() {
    ll n, m;
    cin >> n >> m;
    ip.resize(m);
    for (ll i = 0; i < m; i++) {
        cin >> ip[i].first >> ip[i].second;
    }
    sort(ip.begin(), ip.end(), [](auto &a, auto &b) {
        return a.second > b.second; 
    });
    ll ans = 0;
    for (auto &[f,s]: ip) {
      // cout << "f: " << f << ", s: " << s << endl;
        if (f <= n) {
            ans += f * s;
            n -= f;
        } else {
          while (n > 0 && f > 0) {
            ans+=s;
            f--;
            n--;
          }
        }
    }
    cout << ans << endl;
}
int main() {
  solve();
    return 0;
}

