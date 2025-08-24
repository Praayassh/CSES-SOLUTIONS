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
	vector<pair<int, int>> intg(n);
	for(int i = 0; i < n; i++) {
		cin >> intg[i].first;
		intg[i].second = i + 1;
	}
	sort(intg.begin(), intg.end());
	int i = 0, j = n - 1;
	while(i < j) {
		ll sum = intg[i].first + intg[j].first;
		if(sum == x) {
			cout << intg[i].second << " " << intg[j].second << "\n";
			return;
		} else if(sum < x) {
			i++;
		} else {
			j--;
		}
	}
	cout << "IMPOSSIBLE" << "\n";
}
