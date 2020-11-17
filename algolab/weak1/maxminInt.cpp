#include <iostream>
using namespace std;

int main(){
    int t;

    cin >> t;
    for (int i = 0; i < t; i++){
        int n, k;
        int max = -99999;
        int min = 99999;

        cin >> n;

        for(int j = 0; j < n; j++) {
            cin >> k;

            if (max <= k) {
                max = k;
            }
            if (min >= k) {
                min = k;
            }
        }
        cout << max << " " << min << endl;
    }
    return 0;
}