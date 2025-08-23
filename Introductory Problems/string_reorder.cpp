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
	string s;
	cin >> s;
	int n = s.length();
	vector<int> freq(26, 0);
	for(auto &c : s) {
		freq[c - 'A']++;
	}
	int _max_ = *max_element(freq.begin(), freq.end());
	if(_max_ > (n + 1) / 2) {
		cout << -1 << "\n";
		return;
	}
	char prev = '$';
	string ans = "";
	for(int i = 0; i < n; i++) {
		bool placed = false;
		for(int k = 0; k < 26; k++) {
			int curr = k + 'A';
			if(curr == prev || freq[k] == 0) continue;
			freq[k]--;
			int max_rem = *max_element(freq.begin(), freq.end());
			int rem = n - i - 1;
			if(max_rem <= (rem + 1) / 2) {
				placed = true;
				prev = curr;
				ans += curr;
				break;
			}
			freq[k]++;
		}
		if(!placed) {
			cout << -1 << "\n";
			return;
		}
	}
	cout << ans << "\n";
}
