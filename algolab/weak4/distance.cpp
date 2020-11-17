#include <iostream>
using namespace std;

int main(){
    int testCase;

    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        int a1, a2, b1, b2;
        int x, y;

        cin >> a1 >> b1 >> a2 >> b2;
        cin >> x >> y;

        if (x >= a1 && x <= a2 && y >= b1 && y <= b2) {
            cout << 0 << " " << 0 << endl;
        }
        else if (x > a2 && y > b2) {
            cout << ((y - b2)*(y - b2))+((x - a2)*(x - a2)) << " " << (y - b2)+(x - a2) << endl;
        }
        else if (x < a1 && y > b2) {
            cout << ((a1 - x)*(a1 - x))+((y - b2)*(y - b2)) << " " << (a1 - x)+(y - b2) << endl;
        }
        else if (x < a1 && y < b1) {
            cout << ((a1 - x)*(a1 - x))+((b1 - y)*(b1 - y)) << " " << (a1 - x)+(b1 - y) << endl;
        }
        else if (x > a2 && y < b1) {
            cout << ((x - a2)*(x - a2))+((b1 - y)*(b1 - y)) << " " << (x - a2)+(b1 - y) << endl;
        }
        else if (x >= a1 && x <= a2 && y > b2) {
            cout << (y - b2)*(y - b2) << " " << (y - b2) << endl;
        }
        else if (x >= a1 && x <= a2 && y < b1) {
            cout << (b1 - y)*(b1 - y) << " " << (b1 - y) << endl;
        }
        else if (x < a1 && y >= b1 && y <= b2) {
            cout << (a1 - x)*(a1 - x) << " " << (a1 - x) << endl;
        }
        else if (x > a2 && y >= b1 && y <= b2) {
            cout << (x - a2)*(x - a2) << " " << (x - a2) << endl;
        }
    }
    return 0;
}