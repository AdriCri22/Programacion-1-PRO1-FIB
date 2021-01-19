#include <iostream>
using namespace std;

int main() {
    int n, predecessor = 0, peak = 0;
    bool found = false;
    
    while (cin >> n and n != 0) {
        if (0 < predecessor and predecessor <= 3143 and 3143 < peak and n <= 3143) found = true;
        predecessor = peak;
        peak = n;
    }
    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
}
