#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			sum += a;
		}
		cout << (sum % 3 == 0 ? "Yes" : "No") << '\n';
	}
	return 0;
}
