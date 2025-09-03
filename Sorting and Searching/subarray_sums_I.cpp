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
	int n, x;
	cin >> n >> x;
	vector<int> e(n);
	for(int i = 0; i < n; ++i) {
		cin >> e[i];
	}
	int count = 0, st = 0;
	ll sum = 0;
	for(int end = 0; end < n; ++end) {
		sum += e[end];
		while(sum > x && st <= end) {
			sum -= e[st];
			st++;
		}
		if(sum == x) {
			count++;
		}
	}	
	cout << count << "\n";	
}
