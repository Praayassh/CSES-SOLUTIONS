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
	set<int> unique;
	for(int i = 0; i < n; i++) {
		int integers;
		cin >> integers;
		unique.insert(integers);
	}
	cout << (int)unique.size() << "\n";
}
