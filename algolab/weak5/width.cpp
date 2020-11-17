#include <iostream>
using namespace std;

int main() {
    int testCase;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int n, j;
        int area, temp, x, y;
        char arrx[100], arry[100];

        cin >> n;

        for (j = 0; j < n; j++){
            cin >> x >> y;
            arrx[j] = x;
            arry[j] = y;
        }
        area = 0;

        for (j = 0; j < n - 1; j++) {
            area += (arrx[j] + arrx[j + 1]) * (arry[j + 1] - arry[j]);
        }
        area += (arrx[j] + arrx[0]) * (arry[0] - arry[j]);
        if (area < 0) {
            temp = -area;
            cout << temp << ' ' << -1 << endl;
        }
        else if (area > 0) {
            cout << area << ' ' << 1 << endl;
        }
    }
    return 0;
}