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
	string str;
	cin >> str;
	vector<int> freq(26);
	for(auto &s : str) {
		freq[s - 'A']++;
	}
	int odd = 0;
	char odd_char = ' ';
	int odd_index = -1;
	for(int i = 0; i < 26; i++) {
		if(freq[i] % 2 != 0) {
			odd++;
			odd_char = (char) ('A' + i);
			odd_index = i;
		}
		if(odd > 1) {
			cout << "NO SOLUTION" << "\n";
			return;
		}
	}
	if(odd_index != -1) freq[odd_index]--;
	string right = "";
	for(int i = 0; i < 26; i++) {
		right += string(freq[i] / 2, (char) ('A' + i));
	}
	string left = right;
	reverse(left.begin(), left.end());
	string palindrome = "";
	if(odd_index == -1) {
		palindrome = left + right;
	} else {
		palindrome = left + odd_char + right;
	}
	cout << palindrome << "\n";
}
