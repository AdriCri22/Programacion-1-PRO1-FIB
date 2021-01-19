#include <iostream>
using namespace std;

int main() {
    int a;
    
    while (cin >> a) {
        int sum = 0;
        
        cout << "The sum of the digits of " << a;
        
        while (a != 0) {
            sum += a % 10;
            a = a / 10;
        }
        
        cout << " is " << sum << ".\n";
    }
}
