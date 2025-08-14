#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll t, n, c;
vector<ll> arr;

bool isposible(ll min_dist) {
    ll cows = 1, last_pos = arr[0];
    for (ll i = 1; i < n; i++) {
        if (arr[i] - last_pos >= min_dist) {
            cows++;
            last_pos = arr[i];
        }
        if (cows >= c) return true;
    }
    return false;
}

ll Binary_search() {
    ll l = 1, r = arr[n - 1] - arr[0];  // realistic range
    ll ans = 0;

    while (l <= r) {
        ll mid = (l + r) / 2;
        if (isposible(mid)) {
            ans = mid;
            l = mid + 1; // try bigger distance
        } else {
            r = mid - 1;
        }
    }

    return ans;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> c;
        arr.resize(n);
        for (ll i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        ll ans = Binary_search();
        cout << ans << "\n";
    }

    return 0;
}
