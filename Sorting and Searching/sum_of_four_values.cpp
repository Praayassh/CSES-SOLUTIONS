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
	vector<pair<int,int>> e(n);
	for(int i = 0; i < n; ++i) {
		cin >> e[i].first;
		e[i].second = i + 1;
	}
	sort(e.begin(), e.end());
	bool found = false;
	for(int i = 0; i < n - 3 && !found; ++i) {
		for(int j = i + 1; j < n - 2 && !found; ++j) {
			int k = i + 2, l = n - 1;
			while(k < l) {
				ll sum = e[i].first + e[j].first + e[k].first + e[l].first;
				if(sum == x) {
					cout << e[i].second << " " << e[j].second << " " << e[k].second << " "
					<< e[l].second << " \n";
					found = true;
					break;
				} else if (sum < x) {
					k++;
				} else {
					l--;
				}
			}
		}
	}
	if(!found) {
		cout << "IMPOSSIBLE" << "\n";
	}
}
