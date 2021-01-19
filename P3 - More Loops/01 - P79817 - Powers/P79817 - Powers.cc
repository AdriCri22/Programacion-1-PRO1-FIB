#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    while (cin >> a >> b) {
        if (0 <= b) {
            int pow = 1;
            for (int i = 1; i <= b; i++) {
                pow *= a;
            }
            cout << pow << "\n";
        }
    }
}
