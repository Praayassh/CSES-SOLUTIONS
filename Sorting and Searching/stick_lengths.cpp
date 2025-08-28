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
	vector<int> e(n);
	for(int i = 0; i < n; i++) {
		cin >> e[i];
	}
	sort(e.begin(), e.end());
	int median = e[n / 2];
	ll x = 0;
	for(int i = 0; i < n; i++) {
		x += abs(e[i] - median);
	}
	cout << x << "\n";
}
