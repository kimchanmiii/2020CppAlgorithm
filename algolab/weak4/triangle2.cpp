#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int testCase;

    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        int a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        int a, b, c;

        a = (a1 - b1)*(a1 - b1) + (a2 - b2)*(a2 - b2);
        b = (b1 - c1)*(b1 - c1) + (b2 - c2)*(b2 - c2);
        c = (c1 - a1)*(c1 - a1) + (c2 - a2)*(c2 - a2);

        if ((a >= b) && (a >= c)){ //a가 제일 클때
            if (sqrt(b) + sqrt(c) > sqrt(a)){
                if (b + c == a) cout << 1 << endl;
                else if (b + c < a) cout << 2 << endl;
                else if (b + c > a) cout << 3 << endl;
            }
            else {
                cout << 0 << endl;
            }
        } 
        else if ((b >= c) && (b >= a)){ //b가 제일 클때
            if (sqrt(a) + sqrt(c) > sqrt(b)){
                if (a + c == b) cout << 1 << endl;
                else if (a + c < b) cout << 2 << endl;
                else if (a + c > b) cout << 3 << endl;
            }
            else {
                cout << 0 << endl;
            }
        } 
        else if ((c >= a) && (c >= b)){ //c가 제일 클때
            if (sqrt(a) + sqrt(b) > sqrt(c)){
                if (a + b == c) cout << 1 << endl;
                else if (a + b < c) cout << 2 << endl;
                else if (a + b > c) cout << 3 << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}