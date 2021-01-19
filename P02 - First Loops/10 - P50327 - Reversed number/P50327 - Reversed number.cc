#include <iostream>
using namespace std;

int main() {
    int n, r, i;
    cin >> n;
    
    while (n != 0) {
        i = n % 10;
        
        r = r * 10 + i;
        
        n /= 10;
        
        if (r == 0) {
            cout << "0";
        }
    }
    cout << r << endl;
}
