#include<iostream>

using namespace std;
const char k[2] = {'W', 'B'};

int main() {
	int n, m;
	cin >> n >> m;
	char c;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c;
			if (c == '.') {cout << k[(i + j) & 1];}
			else cout << c;
		}
		cout << '\n';
	}

	return 0;
}
