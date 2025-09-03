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
	int n, x;
	cin >> n >> x;
	vector<int> e(n);
	for(int i = 0; i < n; ++i) {
		cin >> e[i];
	}
	map<ll, int> s;
	s[0]++;
	ll count = 0, sum = 0;
	for(int i = 0; i < n; ++i) {
		sum += e[i];
		count += s[sum - x];
		s[sum]++;
	}
	cout << count << "\n";
}
