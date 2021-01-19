#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;
    if (1799 < y < 10000) {
        
        if ((y % 100) == 0) {
            
            if (((y / 100) % 4) == 0) {
                cout << "YES";
            } else {
                cout << "NO";
            }
        } else {
            
            if ((y % 4) == 0) {
                cout << "YES";
            } else {
                cout << "NO";
            }
        }
    }
    
    cout << endl;
}
