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
	ll answer = 0;
	for(int i = 5; i <= n; i *= 5) {
		answer = answer + n / i;
	}
	cout << answer << "\n";
}
