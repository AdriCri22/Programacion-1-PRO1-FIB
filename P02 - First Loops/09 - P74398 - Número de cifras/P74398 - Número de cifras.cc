#include <iostream>
using namespace std;

int main() {
    int n, r, d;
    cin >> n;
    
    for(int i = 2; i <= 16; i++) {
        d = 0;
        r = n;
        while (r != 0) {
            d += 1;
            
            r /= i;
        }
        
        if (i < 16) {
            cout << "Base " << i << ": " << d << " cifras.\n";
        } else {
            cout << "Base " << i << ": " << d << " cifras.";
        }
    }
    cout << endl;
}
