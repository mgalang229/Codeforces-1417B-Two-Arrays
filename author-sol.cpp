#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, T;
		cin >> n >> T;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int cur = 0;
		vector<int> status(n);
		for (int i = 0; i < n; i++){ 
			if (T % 2 == 0 && a[i] == T / 2) {
				status[i] = cur % 2;
				cur++;
			} else if (2 * a[i] < T) {
				status[i] = 0;
			} else {
				status[i] = 1;
			}
		}
		for (auto& x : status) {
			cout << x << " ";
		}
		cout << '\n';
	}
	return 0;
}
