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
	deque<int> q;
	for(int i = 1; i <= n; ++i) {
		q.push_back(i);
	}
	while(!q.empty()) {
		q.push_back(q.front());
		q.pop_front();
		cout << q.front() << " ";
		q.pop_front();
	}
	cout << "\n";
}
