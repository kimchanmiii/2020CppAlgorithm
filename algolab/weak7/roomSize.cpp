#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

struct element { char x, y; };
element MOVE[4] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

char room[100][100];
char visited[100][100];

int m, n;
int cnt;

void RoomNumber(int x, int y) {
    visited[x][y] = '+';
    cnt++;
    for (int i = 0; i < 4; i++) {
        int y2 = y + MOVE[i].y;
        int x2 = x + MOVE[i].x;
        if (0 <= y2 && y2 < m && 0 <= x2 && x2 < n) {
            if (room[x2][y2] == '.' && visited[x2][y2] != '+') 
                RoomNumber(x2, y2);
        }
    }
}

int main() {
    int testCase;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        string line;
        cin >> m >> n;

        fill(&room[0][0], &room[n - 1][m], 0);
        fill(&visited[0][0], &visited[n - 1][m], 0);

        for (int j = 0; j < n; j++) {
            cin >> line;
            for (int k = 0; k < m; k++) {
                room[j][k] = line[k];
            }
        }
        vector <int> Rcount;

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                if (room[j][k] == '.' && visited[j][k] != '+') {
                    cnt = 0;
                    RoomNumber(j, k);
                    Rcount.push_back(cnt);
                }
            }
        }
        cout << Rcount.size() << endl;
        sort(Rcount.begin(), Rcount.end(), greater<int>());
        for (int c = 0; c < Rcount.size(); c++) cout << Rcount[c] << " ";
        cout << endl;
    }
}