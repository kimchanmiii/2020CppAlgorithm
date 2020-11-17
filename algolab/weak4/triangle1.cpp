#include <iostream>
using namespace std;

int main(){
    int testCase;

    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        int a, b, c;
        cin >> a >> b >> c;

        if(c < a+b){
            if ((a == b) && (b == c) && (a == c)){
                cout << 1 << endl;
            }
            else if (a*a + b*b == c*c){
                cout << 2 << endl;
            }
            else if (((a == b)&&(b != c)) || ((a == c)&&(b != c)) || ((b == c)&&(a != b))){
                cout << 3 << endl;
            }
            else cout << 4 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }

    return 0;
}