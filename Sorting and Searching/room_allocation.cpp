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

struct hot {
	int a, d, idx, t;
};
	
void solve() {
	int n;
	cin >> n;
	vector<hot> e(n);
	for(int i = 0; i < n; ++i) {
		cin >> e[i].a >> e[i].d;
		e[i].idx = i;
		e[i].t = 0;
	}
	sort(e.begin(), e.end(), [](auto &x, auto &y) {
		return x.a < y.a;
	});
	
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	int r_c = 0;
	for(int i = 0; i < n; ++i) {
		if(!pq.empty() && pq.top().first < e[i].a) {
			pair<int, int> top = pq.top();
			pq.pop();
			e[i].t = top.second;
			pq.push({e[i].d, top.second});
		} else {
			++r_c;
			e[i].t = r_c;
			pq.push({e[i].d, r_c});
		}
	}
	sort(e.begin(), e.end(), [](auto &x, auto &y) {
		return x.idx < y.idx;
	});
	cout << r_c << "\n";
	for(int i = 0; i < n; ++i) {
		cout << e[i].t << " ";
	}
	cout << "\n";
}
