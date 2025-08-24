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
	vector<int> w(n);
	for(int i = 0; i < n; i++) {
		cin >> w[i];
	}
	sort(w.begin(), w.end());
	int i = 0, j = n - 1, count = 0;
	while(i <= j) {
		if(w[i] + w[j] <= x) {
			count++;
			i++;
			j--;
		} else {
			j--;
			count++;
		}
	}
	cout << count << "\n";
}
