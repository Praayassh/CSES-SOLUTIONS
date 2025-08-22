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
	int a, b;
	cin >> a >> b;
	if((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b)) {
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}
}
