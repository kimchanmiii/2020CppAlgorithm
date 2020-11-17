#include <iostream>
#include <stack>
#include <string>
using namespace std;

int match(char x, char y) {
	if (x == '(' && y == ')') { return 1; }
	else if (x == '[' && y == ']') { return 1; }
	else if (x == '{' && y == '}') { return 1; }
	return 0;
}

int main() {
    int testCase;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int answer = 0;
        string str;
        stack<char> stk;

        cin >> str;
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == '(' || str[j] == '[' || str[j] == '{') stk.push(str[j]);
            else {
                if (stk.empty()) { answer = 0; break; }
                else {
                    if (match(stk.top(), str[j])) { stk.pop(); answer = 1; }
                    else if (!match(stk.top(), str[j])) { stk.pop(); answer = 0; break; }
                }
            }
        }
        if (!stk.empty()) answer = 0;
        cout << answer << endl;
    }
}