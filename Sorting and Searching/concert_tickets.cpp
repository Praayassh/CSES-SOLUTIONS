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
	int n, m;
	cin >> n >> m;
	multiset<int> p;
	for(int i = 0; i < n; i++) {
		int price;
		cin >> price;
		p.insert(price);
	}
	for(int i = 0; i < m; i++) {
		int x;
		cin >> x;
		auto it = p.upper_bound(x);
		if(it == p.begin()) {
			cout << -1 << "\n";
		} else {
			it--;
			cout << *it << "\n";
			p.erase(it);
		} 
	}
}
