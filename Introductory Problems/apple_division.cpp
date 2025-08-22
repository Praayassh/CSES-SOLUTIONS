#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<int> apples;
ll min_val = LLONG_MAX;

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

void min_(int k, ll sum_1, ll sum_2) {
	if(k == n) {
		min_val = min(min_val, abs(sum_1 - sum_2));
		return;
	}
	
	min_(k + 1, sum_1 + apples[k], sum_2);
	min_(k + 1, sum_1, apples[k] + sum_2);
}


void solve() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		int apple;
		cin >> apple;
		apples.push_back(apple);
	}
	min_(0, 0, 0);
	cout << min_val << "\n";
}
