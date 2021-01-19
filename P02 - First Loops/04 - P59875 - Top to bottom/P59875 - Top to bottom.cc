#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    if (x < y) {
        for (int i = y; x < i; i--) {
            cout << i << "\n";
        }
        cout << x;
    } else {
        for (int i = x; i > y; i--) {
            cout << i << "\n";
        }
        cout << y;
    }
    cout << endl;
}
