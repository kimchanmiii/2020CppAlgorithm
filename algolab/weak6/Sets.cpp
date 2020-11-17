#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main() {
    int testCase;
    ifstream is("input.txt");

    is >> testCase;

    for (int q = 0; q < testCase; q++) {
        int input_1, input_2, data_1, data_2, temp, x;
        int i, j, k, l;
        int arr1[133] = {0, }, arr2[133] = {0, }, arr3[133] = {0, }, A[133] = {0, }, C[133] = {0, };
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;

        is >> input_1;
        for (i = 0; i < input_1; i++){
            is >> data_1;	
            arr1[i] = data_1;
        }

        is >> input_2;
        for (i = 0; i < input_2; i++) {
            is >> data_2;	
            arr2[i] = data_2;
        }
        //정렬
        for (k = 0; k < input_1 - 1; k++) {
            for (l = 0; l < input_1 - 1 - k; l++) {
                if (arr1[l] > arr1[l + 1]){
                    temp = arr1[l];
                    arr1[l] = arr1[l + 1];
                    arr1[l + 1] = temp;
                }
            }
        }
        for (k = 0; k < input_2 - 1; k++) {
            for (l = 0; l < input_2 - 1; l++) {
                if (arr2[l] > arr2[l + 1]){
                    temp = arr2[l];
                    arr2[l] = arr2[l + 1];
                    arr2[l + 1] = temp;
                }
            }
        }
        //교집합, 차집합
        for (i = 0; i < input_1; i++) {
            x = 0;
            for (j = 0; j < input_2; j++) {
                if (arr1[i] == arr2[j]) { 
                    A[i] = -1; cnt1++; x = 1; 
                }
            }
            if (x != 1) { C[i] = -1; cnt3++; }
        }
        //합집합
        for (i = 0; i < input_1; i++) { arr3[i] = arr1[i]; cnt2++; }
        for (i = 0; i < input_2; i++){
            x = 0;
            for (j = 0; j < input_1; j++){
                if (arr2[i] == arr1[j]) { x = 1;}
            }
            if (x != 1) { arr3[cnt2] = arr2[i]; cnt2++; }
        }
        for (k = 0; k < cnt2 - 1; k++) {
            for (l = 0; l < cnt2 - 1; l++) {
                if (arr3[l] > arr3[l + 1])
                {
                    temp = arr3[l];
                    arr3[l] = arr3[l + 1];
                    arr3[l + 1] = temp;
                }
            }

        }
        //출력
        cout << cnt1 << ' ';
        for (i = 0; i < input_1; i++) {
            if (A[i] == -1) { cout << arr1[i] << ' '; }
        }
        cout << ' ' << endl;
        cout << cnt2 << ' ';
        for (i = 0; i < cnt2; i++) {
            cout << arr3[i] << ' ';
        }
        cout << ' ' << endl;
        cout << cnt3 << ' ';
        for (i = 0; i < input_1; i++) {
            if (C[i] == -1) { cout << arr1[i] << ' '; }
        }
        cout << ' ' << endl;
        }
    return 0;
}