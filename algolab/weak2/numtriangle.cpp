#include <iostream>
using namespace std;

int main (){
    int testCase;

    cin >> testCase;

    for(int n = 0; n < testCase; n++){
        int k;
        cin >> k;

        for(int i = 0; i < k; i++){
            for(int j = 0; j <= i; j++){
                int triangle = 0;

                triangle = j * k - (j*(j - 1) / 2);
                triangle += ((i+1) - (j+1)) + 1;

                cout << triangle << " ";
            }
            cout << endl;
        }
    }
}

