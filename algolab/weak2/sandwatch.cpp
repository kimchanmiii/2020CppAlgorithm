#include<iostream>
using namespace std;

int main(){
	int testCase;
	cin >> testCase;
	for(int n = 0; n < testCase; n++){
		int k;
		cin >> k;
		int x = 0;
		for(int i = 0; i < k; i++){
			for(int j = 0; j < x; j++) {
                cout << "-";
            }
			for(int j = 0; j < (k-x*2); j++){
				if(j%2 == 0){
                    cout << "*";
                }
				else {
                    cout <<"+";
                }
			}
			for(int m = 0; m < x; m++){
                cout << "-";
            }
			if (i < k/2){
                x++;
            }
			else{
                x--;
            }
			cout << endl;
		}
	}
	return 0;
}