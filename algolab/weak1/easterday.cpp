#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++){
        int Y, C, N, T, I, J, K, L, P, Q, M, day;
        cin >> Y;

        C = Y / 100;
        N = Y - (Y/19)*19;
        T = (C - 17)/25;
        I = C - (C/4) - ((C-T)/3) + (N*19 + 15);
        J = I - (I/30)*30;
        K = J - (J/28)*(1-(J/28))*(29/(J+1))*((21 - N)/11);
        L = (Y + (Y/4) + J + 2) - C + (C/4);
        P = L - (L/7)*7;
        Q = K - P;
        M = ((Q + 40)/44) + 3;
        day = (Q + 28) - ((M/4)*31);

        cout << M << " " << day << endl;
    }
    return 0;
}