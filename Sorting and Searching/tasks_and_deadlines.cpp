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
	vector<pair<int, int>> e(n);
	for(int i = 0; i < n; ++i) {
		cin >> e[i].first;
		cin >> e[i].second;
	}
	sort(e.begin(), e.end(), [](auto &x, auto &y) {
		return  x.first < y.first;
	});
	vector<ll> fst(n);
	fst[0] = e[0].first;
	for(int i = 1; i < n; ++i) {
		fst[i] = fst[i - 1] + e[i].first;
	}
	ll ans = 0;
	for(int i = 0; i < n; ++i) {
		ans += e[i].second - fst[i];
	}
	cout << ans << "\n";
}
