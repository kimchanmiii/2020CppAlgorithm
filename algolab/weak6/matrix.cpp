#include <iostream>
using namespace std;

int main() {
	int testCase;

	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		int a, b, num;
		int X[100][100] = {0, }, Y[100][100] = {0, }, Z[100][100] = {0, };

		cin >> a >> b;

		for (int j = 0; j < a; j++) {
			for (int k = 0; k < b; k++) {
				cin >> X[j][k];
			}
		}

		for (int j = 0; j < a; j++) {
			for (int k = 0; k < b; k++) {
				cin >> Y[j][k];
			}
		}

		for (int j = 0; j < a; j++) {
			for (int k = 0; k < b; k++) {
				Z[j][k] = X[j][k] + Y[j][k];
			}
		}

		for (int j = 0; j < a; j++) {
			for (int k = 0; k < b; k++) {
				cout << Z[j][k] << ' ';
			}
			cout << ' ' << endl;
		}
	}
	return 0; 
}