#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<string> result;
vector<int> freq(26);
int n;

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

void generate(string s) {
	if((int)s.size() == n) {
		result.push_back(s);
		return;
	}
	
	for(int i = 0; i < 26; i++) {
		if(freq[i] > 0) {
			freq[i]--;
			generate(s + (char)(i + 'a'));
			freq[i]++;
		}
	}
}

void solve() {
	string s;
	cin >> s;
	n = s.length();
	for(auto &k : s) {
		freq[k - 'a']++;
	}
	generate("");
	cout << (int) result.size() << "\n";
	for(int i = 0; i < (int)result.size(); i++) {
		cout << result[i] << "\n";
	}
}
