#include <iostream>
#include <string>

using namespace std;

bool checkSum (string str, int check) {
    bool answer;
    if (str[check + 1] == 0) answer = true;
    else answer = false;

    int checj = isdigit(str[check]) ? str[check] - '0' : (str[check] == 'X' ? 10 : -1);

    int sum = 0;

    for (int i = 0, j = 10; i < check && j > 1; i++) {
        if (isdigit(str[i])) sum += j-- * (str[i] - '0');
    }
    int temp; 
    temp = (11 - (sum % 11)) % 11;
    return answer && checj == temp;
}

bool checkNoErr (string str, int first, int num, int& end) {
    bool answer;
    if (isdigit(str[first])) answer = true;
    else answer = false;
    end = first;
    while (isdigit(str[end])) {++end;}
    if (answer && str[end] == '-' && end - first < num + 1) { return true; }
    else { return false; }
}

void checkISBN (string str) {
    int Country, Publisher, BookNum;
    if (checkNoErr (str, 0, 5, Country) && 
    checkNoErr (str, Country + 1, 7, Publisher) && 
    checkNoErr (str, Publisher + 1, 6, BookNum) &&
    checkSum (str, BookNum + 1) && (BookNum == 11)) {
        cout << 1 << endl;
    }
    else { cout << 0 << endl; }
}

int main() {
    int testCase;
    string str;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> str;
        checkISBN(str);
    }
    return 0;
}