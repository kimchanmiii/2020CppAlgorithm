#include <iostream>
using namespace std;

int main() {
    int testCase;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int a, b, c, sum;
        int X[100][100] = {0, }, Y[100][100] = {0, }, Z[100][100] = {0, };


        cin >> a >> b >> c;

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cin >> X[j][i];
            }
        }

        for (int i = 0; i < b; i++) {
            for (int j = 0; j < c; j++) {
                cin >> Y[j][i];
            }
        }

        for (int i = 0; i<a; i++) {
            for (int j = 0; j<c; j++) {
                sum = 0;
                for (int k = 0; k<b; k++) {
                    sum += X[k][i] * Y[j][k];
                }
                Z[i][j] = sum;
            }
        }

        for (int i = 0; i<a; i++) {
            for (int j = 0; j<c; j++) {
                cout << Z[i][j] << ' ';
            }
            cout << ' ' << endl;
        }
    }
}