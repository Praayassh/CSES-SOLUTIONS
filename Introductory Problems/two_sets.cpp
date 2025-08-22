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
	ll n;
	cin >> n;
	ll sum_till_n = n * (n + 1) / 2;
	if(sum_till_n % 2 != 0) {
		cout << "NO" << "\n";
		return;
	}
	vector<ll> set_a, set_b;
	ll half = sum_till_n / 2;
	ll sum = 0;
	for(ll i = n; i >= 1; i--) {
		if(sum + i <= half) {
			sum += i;
			set_a.push_back(i);
		} else {
			set_b.push_back(i);
		}
	}
	
	cout << "YES\n";
	cout << set_a.size() << "\n";
	for(auto &a : set_a) {
		cout << a << " ";
	}
	
	cout << "\n";
	cout << set_b.size() << "\n";
	for(auto &b : set_b) {
		cout << b << " ";
	}
	cout << "\n";	
}
