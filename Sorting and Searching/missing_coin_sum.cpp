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
	ll s = 1;
	for(int i = 0; i < n; i++) {
		if(e[i] > s) continue;
		s += e[i];
	}
	cout << s << "\n";
}
