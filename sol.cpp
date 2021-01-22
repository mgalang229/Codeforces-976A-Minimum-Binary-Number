#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	int n;
	cin >> n >> s;
	// if the size of the string is 1, then print the string itself
	if (n == 1) {
		cout << s[0] << '\n';
		return 0;
	}
	// otherwise, count the number of zeroes
	int zeroes = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			zeroes++;
		}
	}
	// print one as the starting digit for the minimum binary number
	// based on the logic, all the 1's should merge with the leading 1 to
	// achieve mininum value
	cout << 1;
	// print the remaining zeroes
	for (int i = 0; i < zeroes; i++) {
		cout << 0;
	}
	cout << '\n';
	return 0; 
}
