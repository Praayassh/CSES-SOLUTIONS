#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<bool> diag_1(15, false);
vector<bool> diag_2(15, false);
vector<bool> columns(8, false);
vector<string> board(8);
int k = 8; // k queens
int c = 0;

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

void count(int row, int queens_placed) {
	if(queens_placed == k) {
		c++;
		return;
	}
	if(row == 8) return;
	for(int col = 0; col < 8; col++) {
		if(diag_1[col + row] || diag_2[row - col + 7] 
		|| board[row][col] == '*' || columns[col]) continue;
		
		 diag_1[col + row] = diag_2[row - col + 7] = columns[col] = true;
		 count(row + 1, queens_placed + 1);
		 diag_1[col + row] = diag_2[row - col + 7] = columns[col] = false;
	 }
 }
		
void solve() {
	for(int i = 0; i < 8; i++) {
		string s;
		cin >> s;
		board[i] = s;
	}
	count(0, 0);
	cout << c << "\n";
}
