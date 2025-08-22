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

void  toh(int n, int left, int right, int middle) {
	if(n == 1) {
		cout << left << " " << right << "\n";
		return;
	}
	toh(n - 1, left, middle, right);
	cout << left << " " << right << "\n";
	toh(n - 1, middle, right, left);
}
		
void solve() {
	int n;
	cin >> n;
	cout << (1 << n) - 1 << "\n";
	toh(n, 1, 3, 2);
}
