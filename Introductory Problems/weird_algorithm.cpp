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
	ll n;
	cin >> n;
	cout << n << " ";
	while(n != 1) {
		if(n % 2 != 0) {
			n = n * 3 + 1;
			cout << n << " ";
		} else {
			n /= 2;
			cout << n << " ";
		}
	}
	cout <<"\n";
}
