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
	multiset<int> towers;
	for(auto c : e) {
		auto it = towers.upper_bound(c);
		if(it != towers.end()) {
			towers.erase(it);
		}
		towers.insert(c);
	}
	cout << (int)towers.size() << "\n";
}
