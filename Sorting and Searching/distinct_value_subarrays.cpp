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
	for(int i = 0; i < n; ++i) {
		cin >> e[i];
	}
	set<int> u;
	int st = 0;
	ll count = 0;
	for(int end = 0; end < n; ++end) {
		while(u.count(e[end])) {
			u.erase(e[st]);
			st++;
		}
		u.insert(e[end]);
		count += end - st + 1;
	}
	cout << count << "\n";
}
