#include <iostream>
using namespace std;

int main() {
    int n, r, i;
    cin >> n;
    
    if (0 < n) {
        while (n !=0) {
            i = n % 16;
            
            n /= 16;
            
            if (i == 10) {
                cout << "A";
            } else if (i == 11) {
                cout << "B";
            } else if (i == 12) {
                cout << "C";
            } else if (i == 13) {
                cout << "D";
            } else if (i == 14) {
                cout << "E";
            } else if (i == 15) {
                cout << "F";
            } else {
                cout << i;
            }
        }
    } else {
        cout << "0";
    }
    cout << endl;
}
