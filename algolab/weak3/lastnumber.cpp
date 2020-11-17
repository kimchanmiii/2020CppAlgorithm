#include <iostream>
using namespace std;

int main(){
  int t;

  cin >> t;
  for(int i = 0; i < t; i++){
    int n, k;
    long lastNum = 1;

    cin >> n;

    for(int j = 0; j < n; j++){
      cin >> k;
      lastNum *= k;
      lastNum %= 10;
    }
    cout << lastNum << endl;
  }
  return 0;
}
