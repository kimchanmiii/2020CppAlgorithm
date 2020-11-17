#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    
    for(int i = 0; i < testCase; i++){
        int a1, a2, b1, b2, c1, c2;
        int area;
        int temp;

        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        area = ((b1 - a1)*(c2 - a2) - (c1 - a1)*(b2 - a2));
        temp = 1;
        if (area < 0) {
            temp = -area;
            cout << temp << ' ';
        }
        else if (area > 0) {
            cout << area << ' ';
        }
        else {
            cout << 0 << ' ';
        }
        if (area > 0) {
            cout << 1 << ' ' << endl;
        }
        else if (area < 0) {
            cout << -1 << ' ' << endl;
        }
        else {
            cout << 0 << ' ' << endl;
        }
    }
    return 0;
}