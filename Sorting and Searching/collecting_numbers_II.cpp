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
	int n, m;
	cin >> n >> m;
	vector<int> e(n + 1), pos(n + 1);
	for(int i = 1; i <= n; i++) {
		cin >> e[i];
		pos[e[i]] = i;
	}
	int rounds = 1;
	for(int i = 2; i <= n; i++) {
		if(pos[i] < pos[i - 1]) {
			rounds++;
		}
	}
	for(int k = 0; k < m ; k++) {
		int x, y;
		cin >> x >> y;
		int val_x = e[x];
		int val_y = e[y];
		
		set<int> aff;
		if(val_x > 1) aff.insert(val_x - 1);
		if(val_x < n) aff.insert(val_x);
		if(val_y > 1) aff.insert(val_y - 1);
		if(val_y < n) aff.insert(val_y);
		
		for(auto c : aff) {
			if(pos[c] > pos[c + 1]) {
				rounds--;
			}
		}
		swap(e[x], e[y]);
		pos[val_x] = y;
		pos[val_y] = x;
		
		for(auto c : aff) {
			if(pos[c] > pos[c + 1]) {
				rounds++;
			}
		}
		
		cout << rounds << "\n";
	}
}



