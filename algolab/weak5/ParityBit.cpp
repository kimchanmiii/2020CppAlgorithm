#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int testCase;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int num;
        unsigned int answer = 0;
        int cnt = 0;

        cin >> num;

        answer = num; 

        while (num != 0) {
            if (num % 2 == 1) cnt++;
            num /= 2;
        }
        if (cnt % 2 == 1) answer += pow(2, 31);

        cout << answer << endl;
    }
    return 0;
}