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
	vector<ll> intg(n);
	for(int i = 0; i < n; i++) {
		cin >> intg[i];
	}
	ll local_sum = intg[0], global_sum = intg[0];
	for(int i = 1; i < n; i++) {
		local_sum = max(local_sum + intg[i], intg[i]);
		global_sum = max(global_sum, local_sum);
	}
	cout << global_sum << "\n";
}
