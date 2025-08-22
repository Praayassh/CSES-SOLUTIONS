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
	int n, x;
	cin >> n >> x;
	vector<string> grid(n);
	for(int i = 0; i < n; i++) {
		cin >> grid[i];
	}
	vector<char> characters = {'A', 'B', 'C', 'D'};
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < x; j++) {
			for(int k = 0; k < 4; k++) {
				if(i == 0 && j == 0) {
					if(grid[i][j] != characters[k]) {
						grid[i][j] = characters[k];
						break;
					}
				} else if(i == 0 && j != 0) {
					if(grid[i][j] != characters[k] && grid[i][j - 1] != characters[k]) { 
						grid[i][j] = characters[k];
						break;
					}
				} else if(j == 0 && i != 0) {
					if(grid[i][j] != characters[k] && grid[i - 1][j] != characters[k])  {
						grid[i][j] = characters[k];
						break;
					}
				} else {
					if(grid[i][j] != characters[k] && grid[i][j - 1] != characters[k] && grid[i - 1][j] != characters[k]) {
						grid[i][j] = characters[k];
						break;
					}
				}
			}
		}
		cout << grid[i] << "\n";
	}		
}
