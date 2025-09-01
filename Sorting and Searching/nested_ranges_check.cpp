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

struct con {
	int l, r, idx, conts, contd;
};

void solve() {
	int n;
	cin >> n;
	vector<con> e(n);
	for(int i = 0; i < n; ++i) {
		cin >> e[i].l >> e[i].r;
		e[i].idx = i;
	}
	sort(e.begin(), e.end(), [](auto &x, auto &y) {
		if(x.l == y.l) {
			return x.r > y.r;
		}
		return x.l < y.l;
	});
	
	int mx_r = e[0].r;
	for(int i = 1; i < n; ++i) {
		if(e[i].r <= mx_r) {
			e[i].contd = 1;
		} else {
			mx_r = max(mx_r, e[i].r);
		}
	}
	int mn_r = e[n - 1].r;
	for(int i = n - 2; i >= 0; --i) {
		if(e[i].r >= mn_r) {
			e[i].conts = 1;
		} else {
			mn_r = min(mn_r, e[i].r);
		}
	}
	sort(e.begin(), e.end(), [](auto &x, auto &y) {
		return x.idx < y.idx;
	});
	for(int i = 0; i < n; ++i) {
		cout << e[i].conts << " ";
	}
	cout << "\n";
	for(int i = 0; i < n; ++i) {
		cout << e[i].contd << " ";
	}
	cout << "\n";
}
