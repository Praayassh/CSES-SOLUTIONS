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
    bool f = false;
    for(int i = 0; i < n - 2 && !f; ++i) {
        int j = i + 1, k = n - 1;
        while(j < k) {
            ll sum = e[i].first + e[j].first + e[k].first;
            if(sum == x) {
                cout << e[i].second << " " << e[j].second << " " << e[k].second << "\n";
                f = true;
                break;
            } else if(sum < x) {
				j++;
			}
            else {
				k--;
			}
        }
    }
    if(!f) {
		cout << "IMPOSSIBLE\n";
	}
}

