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
	vector<int> e(n);
	for(int i = 0; i < n; ++i) {
		cin >> e[i];
	}
	stack<int> stk;
	for(int i = 0; i < n; ++i) {
		while(!stk.empty() && (e[stk.top()] >= e[i])) {
			stk.pop();
		}
		if(stk.empty()) {
			cout << 0 << " ";
		} else {
			cout << stk.top() + 1<< " ";
		}
		stk.push(i);
	}
	cout << "\n";
}
