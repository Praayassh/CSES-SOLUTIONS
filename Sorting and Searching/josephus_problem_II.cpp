#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using namespace __gnu_pbds;
using ll = long long;
 
template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
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
	int n, k;
	cin >> n >> k;
	ordered_set<int> e;
	for(int i = 1; i <= n; ++i) {
		e.insert(i);
	}
	int index = 0;
	while(!e.empty()) {
		int size = e.size();
		index = (index + k) % size;
		auto it = e.find_by_order(index);
		cout << *it << " ";
		e.erase(it);
	}
	cout << "\n";
}
