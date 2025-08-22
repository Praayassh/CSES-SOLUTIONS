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
	vector<vector<int>> grid(n, vector<int> (n, -1));
	vector<pair<int, int>> moves = {{-2, 1}, {-2, -1}, {2, 1}, {2, -1}, 
									{1, -2}, {1, 2}, {-1, -2}, {-1, 2}};
	vector<pair<int, int>> q;
	grid[0][0] = 0;
	q.push_back({0, 0});
	
	for(int front = 0; front < (int)q.size(); front++) {
		int x = q[front].first;
		int y = q[front].second;
		
		for(int i = 0; i < (int)moves.size(); i++) {
			int kx = x + moves[i].first;
			int ky = y + moves[i].second;
			
			if(kx >= 0 && kx < n && ky >= 0 && ky < n && grid[kx][ky] == -1) {
				grid[kx][ky] = grid[x][y] + 1;
				q.push_back({kx, ky});
			}
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << grid[i][j] << " ";
		}
		cout << "\n";
	}
}
