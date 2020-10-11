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
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int id = 0, arr[1000], cnt = 0;
		while (id != n) {
			arr[cnt++] = a[id] % 10;
			a[id] /= 10;
			if (a[id] == 0) {
				id++;
			}
		}
		long long sum = 0;
		for (int i = 0; i < cnt; i++) {
			sum += arr[i];
		}
		cout << (sum % 3 == 0 ? "Yes" : "No") << '\n';
	}
	return 0;
}
