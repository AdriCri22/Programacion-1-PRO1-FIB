#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (0 < n) {
        int r = 0;
        int m = 1;
        
        while ((n / m) != 0) {
            m *= 10;
            r += 1;
        }
        
        cout << "The number of digits of " << n << " is " << r << "." << endl;
    } else {
        cout << "The number of digits of " << n << " is " << "1." << endl;
    }
}
