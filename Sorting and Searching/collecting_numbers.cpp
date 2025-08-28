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
	vector<pair<int, int>> e(n);
	for(int i = 0; i < n; i++) {
		cin >> e[i].first;
		e[i].second = i + 1;
	}
	sort(e.begin(), e.end());
	int r = 1;
	for(int i = 1; i < n; i++) {
		if(e[i].second < e[i - 1].second) {
			r++;
		}
	}
	cout << r << "\n"; 
}
