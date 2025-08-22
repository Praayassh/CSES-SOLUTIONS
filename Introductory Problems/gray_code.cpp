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

vector<string> gray(int n) {
	if(n == 1) {
		return {"0", "1"};
	}
	
	vector<string> prev = gray(n - 1);
	vector<string> result;
	for(int i = 0; i < (int)prev.size(); i++) {
		result.push_back("0" + prev[i]);
	}
	
	for(int i = prev.size() - 1; i >= 0; i--) {
		result.push_back("1" + prev[i]);
	}
	return result;
}
	
void solve() {
	int n;
	cin >> n;
	vector<string> result = gray(n);
	for(string &s : result) {
		cout << s << "\n";
	} 
}
