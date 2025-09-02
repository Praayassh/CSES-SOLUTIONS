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
	ll n, t;
	cin >> n >> t;
	vector<ll> e(n);
	ll mn = LLONG_MAX;
	for(int i = 0; i < n; ++i) {
		cin >> e[i];
		if(e[i] < mn) {
			mn = e[i];
		}
	}
	ll low = 1, high = t * mn, ans = high;
	while(low <= high) {
		ll mid = low + (high - low) / 2;
		ll prdcts = 0;
		for(int i = 0; i < n; ++i) {
			prdcts += mid / e[i];
		}
		if(prdcts >= t) {
			ans = mid;
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	cout << ans << "\n";
}		

