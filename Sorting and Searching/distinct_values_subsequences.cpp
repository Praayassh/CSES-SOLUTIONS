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
	map<int, int> e;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		e[x] += 1;
	}
	ll ans = 1;
	const int MOD = 1e9 + 7;
	for(auto f : e) {
		ans = ans * (f.second + 1) % MOD;
	}
	cout << (ans - 1 + MOD) % MOD << "\n";
}
