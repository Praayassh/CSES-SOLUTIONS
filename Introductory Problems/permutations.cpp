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
	if(n == 2 || n == 3) {
		cout << "NO SOLUTION" << "\n";
		return;
	}
	if(n == 4) {
		cout << "3 1 4 2" << "\n";
		return;
	}
	for(int i = 1; i <= n; i += 2) {
		cout << i << " ";
	}
	for(int i = 2; i <= n; i += 2) {
		cout << i << " ";
	}
	cout << "\n";
}
