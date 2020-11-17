/*
 * Sum of Integers
 */

#include <iostream>
using namespace std;

int main(){
    int t;

    cin >> t;
    for (int i = 0; i < t; i++){
        int m, n;
        int sum = 0;

        cin >> m;
        cin >> n;

        for(int j = m; j <= n; j++){
            sum += j;
        }
        cout << sum << endl;
    }
    return 0;
}