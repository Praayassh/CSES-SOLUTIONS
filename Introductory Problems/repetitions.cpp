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
	int ans = 0, max_ = 0;
	int start = 0;
	for(int end = 0; end < (int)s.length(); end++) {
		if(s[end] != s[start]) {
			start = end;
		}
		ans = end - start + 1;
		max_ = max(max_, ans);
	}
	cout << max_ << "\n";
}
