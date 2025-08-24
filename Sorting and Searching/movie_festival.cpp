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
	vector<pair<int, int>> m(n);
	for(int i = 0; i < n; i++) {
		int s, e;
		cin >> s >> e;
		m[i] = {s, e};
	}
	sort(m.begin(), m.end(), [](auto &x, auto &y) {
		return (x.second < y.second);
	});
	int count = 0;
	int last_end = 0;
	for(int i = 0; i < n; i++) {
		if(m[i].first >= last_end) {
			count++;
			last_end = m[i].second;
		}
	}
	cout << count << "\n";
}
