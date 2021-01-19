#include <iostream>
using namespace std;

int main() {
    int n, r, i;
    cin >> n;
    
    if (0 < n) {
        while (n !=0) {
            i = n % 2;
            
            n /= 2;
            
            cout << i;
        }
    } else {
        cout << "0";
    }
    cout << endl;
}
