#include <iostream>
using namespace std;

int main() {
    int testCase;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int a;
        int j,k;
        int data, data2;
        int *arr;
        int temp;

        cin >> a;

        arr = (int *)malloc(sizeof(int)*a);

        for (j = 0; j < a; j++){
            cin >> data;

            arr[j] = data;
        }

        cin >> data2;
        
        cout << a - data2 + 1 << " ";

        for (j = 0; j < a - data2 + 1; j++) {
            temp = 0;
            for (k = 0; k < data2; k++) {
                temp += arr[k + j];
            }
            temp /= data2;

            cout << temp << " ";
        }
        cout << "\n";
    }
    return 0;
}