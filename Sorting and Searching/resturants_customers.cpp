#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
     //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

void solve() {
	int n;
	cin >> n;
	map<int, int> time;
	for(int i = 0; i < n; i++) {
		int a, l;
		cin >> a >> l;
		time[a] = 1;
		time[l] = -1;
	}
	int curr = 0, ans = 0;
	for(auto &t : time) {
		curr += t.second;
		ans = max(ans, curr);
	}
	cout << ans << "\n";
}
