#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

void solve() {
	int n;
	cin >> n;
	ll mx = INT_MIN;
	ll tt = 0;
	for(int i = 0; i < n; ++i) {
		ll e;
		cin >> e;
		mx = max(mx, e);
		tt += e;
	}
	ll ans = max(tt, 2 * mx);
	cout << ans << "\n";
}
