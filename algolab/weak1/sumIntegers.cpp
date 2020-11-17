#include <iostream>
using namespace std;

int main(){
    int t;

    cin >> t;
    for (int i = 0; i < t; i++){
        int n, k;
        int sum = 0;

        cin >> n;

        for(int j = 0; j < n; j++) {
            cin >> k;
            sum += k;
        }
        cout << sum << endl;
    }
    return 0;
}
