#include <iostream>
using namespace std;

int main(){
    int testCase;
    int Hour, Min, Sec, hour, min, sec;

    cin >> testCase;
    
    for (int i = 0; i < testCase; i++){
        int d = 0, h = 0, m = 0, s = 0;
        int n;

        cin >> n;

        for (int j = 0; j < n; j++){
            cin >> Hour >> Min >> Sec >> hour >> min >> sec;

            h += (hour - Hour);
            m += (min - Min);
            s += (sec - Sec);

            if (m < 0){
                m = 60 + m;
                h--;
            }
            if (s < 0){
                s = 60 + s;
                m--;
            }
            if (s>=60){
                m++; 
                s -= 60;
            }
            if (m>=60){
                h++;
                m -= 60;
            }
            if (h>=24){
                d++;
                h -= 24;
            }
        }
        cout << d << " " << h << " " << m << " " << s << endl;
    }
}