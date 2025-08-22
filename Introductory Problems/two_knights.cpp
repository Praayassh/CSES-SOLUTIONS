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
	for(ll i = 1; i <= n; i++) {
		ll total_placements = i * i * ( i * i - 1) / 2;
		ll attack_positions = 4 * (i - 1) * (i - 2);
		ll non_attack_positions = total_placements - attack_positions;
		cout << non_attack_positions << "\n";
	} 
}
