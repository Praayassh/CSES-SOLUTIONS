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
	vector<ll> e(n);
	for(int i = 0; i < n; i++) {
		cin >> e[i];
	}
	set<ll> u;
	int mx = 0, j = 0;
	for(int i = 0; i < n; i++) {
		while(u.count(e[i])) {
			u.erase(e[j]);
			j++;
		}
		u.insert(e[i]);
		mx = max(i - j + 1, mx); //same as {mx = max((int)u.size(), mx);}
	}
	cout << mx << "\n";
}
