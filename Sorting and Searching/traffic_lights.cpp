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
	int x, n;
	cin >> x >> n;
	set<int> e = {0 ,x};
	multiset<int> k = {x};
	for(int i = 0; i < n; ++i) {
		int m;
		cin >> m;
		auto it = e.upper_bound(m);
		int left = *prev(it);
		int right = *it;
		k.erase(k.find(right - left));
		k.insert(m - left);
		k.insert(right - m);
		e.insert(m);
		cout << *k.rbegin() << " ";
	}
	cout << "\n";
}
