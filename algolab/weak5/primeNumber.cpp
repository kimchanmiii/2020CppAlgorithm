#include <iostream>
using namespace std;

int main() {
    int testCase;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int num;
        int cnt = 0;

        cin >> num;

        for (int j = 1; j <= num; j++) {
            if (num % j == 0) cnt ++;
        }
        if (cnt == 2) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}