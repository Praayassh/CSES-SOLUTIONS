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
	vector<vector<int>> grid(n, vector<int> (n, 0));
	for(int row = 0; row < n; row++) {
		for(int col = 0; col < n; col++) {
			vector<bool> exist(2 * n, false);
			for(int left = 0; left < row; left++) {
				exist[grid[left][col]] = true;
			}
			for(int up = 0; up < col; up++) {
				exist[grid[row][up]] = true;
			}
			int value = 0;
			while(exist[value]) {
				value++;
			}
			grid[row][col] = value;
			cout << value << " ";
		}
		cout <<"\n";
	}
}
