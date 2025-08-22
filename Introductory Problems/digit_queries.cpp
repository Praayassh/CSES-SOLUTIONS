#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
     cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

void solve() {
	ll n;
	cin >> n;
	ll len = 1;
	ll count = 9;
	ll block = len * count;
	while(n > block) {
		n -= block;
		len++;
		count *= 10;
		block = len * count;
	}
	ll st = 1; // the staring digit of the required block
	for(int i = 1; i < len; i++) {
		st *= 10;
	}
	ll skip = (n - 1) / len; // skip from start of the block to our number which contains required digit.
	ll num = st + skip; // the number that contains the digit
	string s = to_string(num);
	ll index = (n - 1) % len; // index of the digit inside the number;
	cout << s[index] << "\n";
}
