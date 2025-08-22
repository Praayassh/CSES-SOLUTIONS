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
	ll xor_given = 0;
	for(int i = 1; i <= n - 1; i++) {
		int numbers;
		cin >> numbers;
		xor_given = xor_given ^ numbers;
	}
	
	ll xor_all = 0;
	for(int i = 1; i <= n; i++) {
		xor_all = xor_all ^ i;
	}
	cout << (xor_given ^ xor_all) << "\n";
}
