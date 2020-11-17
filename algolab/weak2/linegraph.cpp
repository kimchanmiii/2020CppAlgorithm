#include <iostream>
using namespace std;
 
int main(){
    int testCase;
    int k;
    char arr[100][100];

    cin >> testCase;

    for (int n=0; n<testCase; n++){
        cin >> k;

        for (int i = 0; i < k; i++){
            for (int j = 0; j < k; j++){
                if ((i == k / 2) && (j == k / 2)){
                    arr[i][j] = 'O';
                }
                else if ((k-1) - i == j){
                    arr[i][j] = '*';
                }
                else if (j == k/2){
                    arr[i][j] = 'I';
                }
                else if (i == k/2){
                    arr[i][j] = '+';
                }
                else{
                    arr[i][j] = '.';
                }
                cout << arr[i][j];
            }
            cout << " " << endl;
        }
    }
}