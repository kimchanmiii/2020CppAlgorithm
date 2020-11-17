#include <iostream>
using namespace std;

int main() {
    int testCase;

    cin >> testCase;

    for (int i = 0; i < testCase; i++){
        int x1, y1, x2, y2;
        int a1, b1, a2, b2;
        int temp;

        cin >> x1 >> y1 >> x2 >> y2;
        cin >> a1 >> b1 >> a2 >> b2;

        if (x2 < x1){
            temp = x1;
            x1 = x2;
            x2 = temp;
        }
        if (a2 < a1){
            temp = a1;
            a1 = a2;
            a2 = temp;
        }
        if (y2 < y1){
            temp = y1;
            y1 = y2;
            y2 = temp;
        }
        if (b2 < b1){
            temp = b1;
            b1 = b2;
            b2 = temp;
        }
        if (y1 == y2) {
            if ((x1 > a1) || (x2 < a1)){
                cout << 0 << endl;
            }
            else {
                if ((y1 < b1) || (y1 > b2)) {
                    cout << 0 << endl;
                }
                else if ((x1 == a1) || (x2 == a1)) {
                    cout << 2 << endl;
                }
                else if ((y1 == b1) || (y1 == b2)) {
                    cout << 2 << endl;
                }
                else {
                    cout << 1 << endl;
                }
		    }
        }
        else {
            if ((y1 > b1) || (y2 < b1)) {
                cout << 0 << endl;
            }
            else {
                if ((x1 < a1) || (x1 > a2)) {
                    cout << 0 << endl;
                }
                else if ((y1 == b1) || (y2 == b1)) {
                    cout << 2 << endl;
                }
                else if ((x1 == a1) || (x1 == a2)) {
                    cout << 2 << endl;
                }
                else {
                    cout << 1 << endl;
                }
            }
        }
    }
    return 0;
}