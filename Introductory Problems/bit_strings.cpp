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
	const int INF = 1e9 + 7;
	cin >> n;
	ll res = 1;
	for(int i = 1; i <= n; i++) {
		res = (res * 2) % INF;
	}
	cout << res << "\n";
}
