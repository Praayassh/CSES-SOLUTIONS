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
	int n, a, b;
	cin >> n >> a >> b;
	if(a + b > n) {
		cout << "NO" << "\n";
		return;
	}
	//if one of them won all games.
	if((a == 0 || b == 0) && (a + b) > 0) {
		cout << "NO" << "\n";
		return;
	}
	//We are going to leave first array as permutaion of 1 to n.
	cout << "YES" << "\n";
	for(int i = 1; i <= n; i++) {
		cout << i << " ";
	}
	cout << "\n";
	//print b wins which is a + i; 
	for(int i = 1; i <= b; i++) {
		cout << a + i << " ";
	}
	//print a wins which is already decided by first array,
	//just print i which is always less than upper permutaion element.
	for(int i = 1; i <= a; i++) {
		cout << i << " ";
	}
	//print ties
	for(int i = a + b + 1; i <= n; i++) {
		cout << i << " ";
	}
	cout << "\n";
}
