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
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> apl(n), apt(m);
	for(int i = 0; i < n; i++) {
		cin >> apl[i];
	}
	sort(apl.begin(), apl.end());
	for(int i = 0; i < m; i++) {
		cin >> apt[i];
	} 
	sort(apt.begin(), apt.end());
	int i = 0, j = 0, count = 0;
	while(i < n && j < m) {
		if(abs(apl[i] - apt[j]) <= k) {
			i++;
			j++;
			count++;
		} else if(apl[i] < apt[j]) {
			i++;
		} else {
			j++;
		}
	}
	cout << count << "\n";
}
