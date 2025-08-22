#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve();
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
     cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
 
void solve() {
	int row, col;
	cin >> row >> col;
	ll max_ = max(row, col);
	ll ans = 0;
	if(max_ == row) {
		if(max_ % 2 == 0) {
			ans = max_ * max_ - col + 1;
		} else {
			ans = (max_ - 1) * (max_ - 1) + col;
		}
	} else {
		if(max_ % 2 == 0) {
			ans = (max_ - 1) * (max_ - 1) + row;
		} else {
			ans = max_ * max_ - row + 1;
		}
	}
	cout << ans << "\n"; 
}
