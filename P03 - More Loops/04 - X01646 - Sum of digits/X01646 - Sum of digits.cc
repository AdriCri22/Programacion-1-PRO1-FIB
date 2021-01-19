#include <iostream>
using namespace std;

int main() {
    int b, n;
    
    cin >> b;
    
    while (cin >> n) {
        int sum = 0;
        
        cout << n << ": ";
        while (n != 0) {
            sum += n % b;
            n = n / b;
        }
        cout << sum << "\n";
    }
}
