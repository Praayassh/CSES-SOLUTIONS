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
	vector<ll> integers(n);
	for(int i = 0; i < n; i++) {
		ll num;
		cin >> num;
		integers[i] = num;
	}
	ll ans = 0;
	for(int i = 1; i < n; i++) {
		if(integers[i] < integers[i - 1]) {
			ans += integers[i - 1] - integers[i];
			integers[i] = integers[i - 1];
		}
	}
	cout << ans << "\n";
}
